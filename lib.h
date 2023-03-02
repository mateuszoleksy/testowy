namespace N
{
        #pragma once 
        
        class Cat
        {
                private:
                        char gender; // gender for Cat
                        string name; // name for Cat
                        int age; //age for Cat
                        string breed; //breed for Cat   
                public:
                        void idz(void);
                        void jedz(void);
                        ~Cat(void);
                        Cat(char, string, int, string);
        };

        Cat::Cat(char gender, string name, int age, string breed)
        {
                Cat::gender = gender;
                Cat::name = name;
                Cat::age = age;
                Cat::breed = breed;
                cout << "Meow meow - said new cat to his owner. On his brace there is: " << gender << " gender, name: " << name << ", age: " << age << ", rasa: "<< breed << endl;
        }

        Cat::~Cat(void)
        {
                cout << "Meow meow - said cat for farawell to his owner" << endl;
        }
}
