#include <iostream>
#include <list>

using namespace std;


int main(){
    bool keep = true;
    char choice {};
    list <int> vet {};

    int min {0};
    int max {0};

    while (keep == true)
    {
        cout << "\nChoose an option to operate:\nP - Print numbers\nA - Add a number\nM - Display mean of numbers"
        "\nS - Display smallest number\nL - Display the largest number\nC - Clear list\nQ - Quit" << endl;
        cin >> choice;

        if(choice == 'p' || choice == 'P'){
            cout << '[';
            for(auto i:vet){
                cout<< ' ' << i << ' ';
            }
            cout << ']';
        }else if(choice == 'a'||choice == 'A'){
            int num {};
            cin >> num;
            vet.push_back(num);
            cout << num <<" Added";
        }else if(choice == 'm'||choice == 'M'){
            int tot{0};
            if(vet.empty()){
                cout << "Unable to calculate the mean - no data";
                continue;
            }
            for (auto i : vet) {
                tot += i;
            }
            cout << "Mean: " << tot / vet.size();
        }else if(choice == 's'||choice == 'S'){
            if(vet.empty()){
                cout << "Unable to get the smallest number - no data";
                continue;
            }
            min = vet.front();
            for(auto i:vet){
                if(min > i) min = i;
            }
            cout << "The smallest number is " << min;

        }else if(choice == 'l'||choice == 'L'){
            if(vet.empty()){
                cout << "Unable to get the largest number - no data";
                continue;
            }
            max = vet.front();
            for(auto i:vet){
                if(max < i) max = i;
            }
            cout << "The largest number is " << max;

        }else if(choice == 'c'||choice == 'C'){
            vet.clear();
            cout << "The list now is empty";
        }else if(choice == 'q'||choice == 'Q'){
            cout << "Goodbye"; 
            keep = false;
        }
    }
    
}
