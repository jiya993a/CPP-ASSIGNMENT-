//
class FileHandler:
    def __init__(self, filename, mode='r'):
        self.filename = filename
        self.file = open(filename, mode)
        print(f"File '{self.filename}' opened in mode '{mode}'.")

    def write(self, content):
        if self.file.writable():
            self.file.write(content)
            print("Content written to file.")
        else:
            print("File is not writable.")

    def read(self):
        if self.file.readable():
            return self.file.read()
        else:
            print("File is not readable.")
            return None

    def __del__(self):
        if hasattr(self, 'file') and not self.file.closed:
            self.file.close()
            print(f"File '{self.filename}' closed in destructor.")
