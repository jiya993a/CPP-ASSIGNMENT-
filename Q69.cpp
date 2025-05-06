//
class Logger:
    def __init__(self, name):
        self.name = name
        print(f"Logger '{self.name}' created.")

    def log(self, message):
        print(f"[{self.name}] {message}")

    def __del__(self):
        print(f"Logger '{self.name}' is being destroyed. Logging final message.")
        self.log("Logger instance is being destroyed.")
