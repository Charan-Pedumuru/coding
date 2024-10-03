from Chef_class import Chef
class Chinese_chef(Chef):     # We imported the functions from the Chef_class to Chinese_Chef_class
    
    def make_fried_rice(self):
        print('The chef makes fried rice')

    def make_special_dish(self):           # We overwrite the function for make_special_dish from Chef_class
        print('The chef makes Shushi')