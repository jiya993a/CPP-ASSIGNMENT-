//
def main():
    # Create a list (array) of Car objects
    car_list = [
        Car("Toyota", "Camry", 2021),
        Car("Honda", "Civic", 2022),
        Car("Ford", "F-150", 2023)
    ]

    print("Car Details:")
    for car in car_list:
        car.display_details()

if __name__ == "__main__":
    main()
