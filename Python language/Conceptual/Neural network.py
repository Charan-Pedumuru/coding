import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import torch
import torch.nn as nn
from sklearn.model_selection import train_test_split
from sklearn.datasets import make_classification

class NeuralNetwork:
    def __init__(self, input_size=784, hidden_layers=[512, 512], output_size=10, 
                 l1_reg=0.01, l2_reg=0.01, activation_function='relu'):
        self.input_size = input_size
        self.hidden_layers = hidden_layers
        self.output_size = output_size
        self.l1_reg = l1_reg
        self.l2_reg = l2_reg
        self.activation_function = activation_function
        
        self.weights = []
        self.biases = []

        # Input layer to first hidden layer
        self.weights.append(0.01 * np.random.randn(self.input_size, self.hidden_layers[0]))
        self.biases.append(np.zeros((1, self.hidden_layers[0])))

        # Hidden layers
        for i in range(len(self.hidden_layers) - 1):
            self.weights.append(0.01 * np.random.randn(self.hidden_layers[i], self.hidden_layers[i+1]))
            self.biases.append(np.zeros((1, self.hidden_layers[i+1])))

        # Hidden layer to output
        self.weights.append(0.01 * np.random.randn(self.hidden_layers[-1], self.output_size))
        self.biases.append(np.zeros((1, self.output_size)))

    def activation(self, x):
        if self.activation_function == 'relu':
            return np.maximum(0, x)
        elif self.activation_function == 'sigmoid':
            return 1 / (1 + np.exp(-x))
        elif self.activation_function == 'tanh':
            return np.tanh(x)
        else:
            raise ValueError("Unsupported activation function")

    def activation_derivative(self, x):
        if self.activation_function == 'relu':
            return (x > 0).astype(float)
        elif self.activation_function == 'sigmoid':
            sig = self.activation(x)
            return sig * (1 - sig)
        elif self.activation_function == 'tanh':
            return 1 - np.tanh(x)**2
        else:
            raise ValueError("Unsupported activation function")

    def forward(self, inputs):
        self.layers = [inputs]
        for i in range(len(self.weights) - 1):
            z = np.dot(self.layers[-1], self.weights[i]) + self.biases[i]
            self.layers.append(self.activation(z))
        # Output layer
        z = np.dot(self.layers[-1], self.weights[-1]) + self.biases[-1]
        self.layers.append(z)
        return z

    def compute_loss(self, y_pred, y_true):
        # Mean squared error loss
        loss = np.mean((y_pred - y_true)**2)
        # Add L1 and L2 regularization
        l1_term = self.l1_reg * np.sum([np.sum(np.abs(w)) for w in self.weights])
        l2_term = self.l2_reg * np.sum([np.sum(w**2) for w in self.weights])
        return loss + l1_term + l2_term

    def backpropagate(self, inputs, y_true, learning_rate=0.01):
        y_pred = self.forward(inputs)
        loss_grad = 2 * (y_pred - y_true) / y_true.shape[0]

        for i in reversed(range(len(self.weights))):
            z = np.dot(self.layers[i], self.weights[i]) + self.biases[i]
            activation_grad = self.activation_derivative(z)
            grad = loss_grad * activation_grad

            # Gradients for weights and biases
            weight_grad = np.dot(self.layers[i].T, grad) + self.l1_reg * np.sign(self.weights[i]) + 2 * self.l2_reg * self.weights[i]
            bias_grad = np.sum(grad, axis=0, keepdims=True)

            # Update weights and biases
            self.weights[i] -= learning_rate * weight_grad
            self.biases[i] -= learning_rate * bias_grad

            loss_grad = np.dot(grad, self.weights[i].T)

    def train(self, X, y, epochs=100, learning_rate=0.01):
        self.losses = []
        for epoch in range(epochs):
            self.backpropagate(X, y, learning_rate)
            loss = self.compute_loss(self.forward(X), y)
            self.losses.append(loss)
            print(f"Epoch {epoch + 1}/{epochs}, Loss: {loss:.4f}")
            
    def evaluate(self, X_test, y_test):
        y_pred = self.forward(X_test)
        accuracy = np.mean(np.argmax(y_pred, axis=1) == np.argmax(y_test, axis=1))
        return accuracy
    
    def predict(self, X):
        return self.forward(X)
    
    def save_model(self, filename):
        torch.save({
            'input_size': self.input_size,
            'hidden_layers': self.hidden_layers,
            'output_size': self.output_size,
            'l1_reg': self.l1_reg,
            'l2_reg': self.l2_reg,
            'activation_function': self.activation_function,
            'weights': self.weights,
            'biases': self.biases
        }, filename)

    def plot_loss(self):
        sns.set(style="darkgrid")
        plt.figure(figsize=(12, 6))
        epochs = range(1, len(self.losses) + 1)
        
        # Plot line graph
        plt.plot(epochs, self.losses, label="Loss", color="blue", linewidth=2)
        
        
        # Improve graph aesthetics
        plt.title("Loss Over Epochs", fontsize=16)
        plt.xlabel("Epoch", fontsize=14)
        plt.ylabel("Loss", fontsize=14)
        plt.xticks(fontsize=12)
        plt.yticks(fontsize=12)
        plt.legend(fontsize=12)
        plt.grid(True, linestyle="--", alpha=0.6)
        
        plt.show()

# Create synthetic data using scikit-learn
def create_data(samples=1000):
    X, y = make_classification(n_samples=samples, n_features=20, n_classes=2, n_informative=15, random_state=42)
    y = y.reshape(-1, 1)  # Reshape y to match output size
    return X, y

# Example usage
X, y = create_data()
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

nn_model = NeuralNetwork(input_size=20, hidden_layers=[64, 32], output_size=1, activation_function='relu')
nn_model.train(X_train, y_train, epochs=50, learning_rate=0.001)
nn_model.plot_loss()