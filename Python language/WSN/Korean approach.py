# Function to calculate Korean Fire Weather Index (Y)
def calculate_korean_index(H, P, CS):
    Y = 0.25 * H + 0.25 * P + 0.5 * CS
    return Y

# Main program
humidity = float(input("Enter humidity (H): "))
precipitation = float(input("Enter precipitation (P): "))
solar_radiation = float(input("Enter solar radiation (CS): "))

korean_index = calculate_korean_index(humidity, precipitation, solar_radiation)

if 10 <= korean_index <= 12:
    print("The danger level is extreme.")
elif korean_index in [13, 14]:
    print("The danger level is high.")
else:
    print("The danger level is low.")
