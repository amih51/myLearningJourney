import os
import CRUD

if __name__ == "__main__":
    operation_system = os.name
    
    match operation_system:
        case "posix": os.system("clear")
        case "nt": os.system("cls")

    print("#"*3, "WELCOME TO LIBRARY", "#"*3)
    print("="*26, "\n")

    # Check database
    CRUD.init_console()

    while(True):

        match operation_system:
            case "posix": os.system("clear")
            case "nt": os.system("cls")

        print("#"*3, "WELCOME TO LIBRARY", "#"*3)
        print("="*26, "\n")

        print("1. Create Data")
        print("2. Read Data")
        print("3. Update Data")
        print("4. Delete Data\n")

        user_option = input("Select number: ")

        print("\n" + "="*26)
        
        match user_option:
            case "1": CRUD.create_console()
            case "2": CRUD.read_console()
            case "3": CRUD.update_console()
            case "4": CRUD.delete_console()

        print("="*26)
        is_done = input("Do you want to exit (y/n) ? ")
        print("="*26)
        if is_done in 'Yy':
            print('\n' + "#"*3 + " THANK YOU " + "#"*3 + "\n")
            break