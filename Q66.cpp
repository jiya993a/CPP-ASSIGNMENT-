//
class Matrix:
    def __init__(self, rows, cols, data):
        if len(data) != rows or any(len(row) != cols for row in data):
            raise ValueError("Data dimensions do not match given rows and columns.")
        self.rows = rows
        self.cols = cols
        self.data = data

    def display(self):
        for row in self.data:
            print(" ".join(map(str, row)))
