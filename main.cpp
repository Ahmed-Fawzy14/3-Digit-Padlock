#include <iostream>
#include <vector>
using namespace std;

//We have a padlock with 3 digits (0-9) 
//Stored in an array of size 3
//We need a burte force algorithm to find the combination
//We need to count the number of operaitons taking place
//n = # of digits in the padlock = 3
//T(n) = sum(3) = O(n) 


void findCombination(vector<int> lockCombination)
{

    int comparisionCounter = 0;

    for(int i = 0; i<9; i++)
    {
        for(int j = 0; j<9; j++)
        {
            for(int k = 0; k<9; k++){
                comparisionCounter = comparisionCounter + 3;
                if((lockCombination[0] == i) && (lockCombination[1] == j) && (lockCombination[2] == k))
                {
                    cout<<"Combination is: "<<lockCombination[0]<<lockCombination[1]<<lockCombination[2]<<endl;
                    cout<<"in: "<<comparisionCounter<<"=='s"<<endl;
                }  
                

                
            }
        }
    }


}



int main()
{

    vector<int> lockCombination = {1,2,3};
    findCombination(lockCombination);


    return 0;
}