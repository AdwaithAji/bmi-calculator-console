#include<iostream>

void menu(bool *programExit);
void bmi();

int main(){

    bool programExit = false;

    while(!programExit){
        menu(&programExit);
    }
     std::cout<<"You Have Exited The Program";   
     return 0;


}
void menu(bool *programExit){
    int choice;
    std::cout<<"********************************"<<'\n';
    std::cout<<"**********BMI-CALCULATOR********"<<'\n';
    std::cout<<"0.Exit: "<<'\n';
    std::cout<<"1.Check Bmi: "<<'\n';
    std::cin>>choice;

    switch(choice){
        case 0: *programExit = true; break;
        case 1: bmi(); break;
    }

}
void bmi(){
    float weight = 0;
    float height = 0;
    float bmi = 0;

    std::cout<<"Enter your Weigth: ";
    std::cin>>weight;
    std::cout<<"Enter your height: ";
    std::cin>>height;
    if(height<=0){
        std::cout<<"Height must be greater than 0:"<<'\n';
        return;
    }
    bmi = weight/(height*height);
    std::cout<<"BMI: "<< bmi<<'\n';
    std::cout<<"-----------"<<'\n';
    if(bmi < 18.5) 
    std::cout << "Category: Underweight\n";
    else if(bmi < 24.9) 
    std::cout << "Category: Normal weight\n";
    else if(bmi < 29.9) 
    std::cout << "Category: Overweight\n";
    else 
    std::cout << "Category: Obese\n";
}
