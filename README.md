# EXP-6

## Aim:
**To study and implement C++ decision making statements.**

## Software:
`Microsoft VSCode`

## Theory:
Decision making statements in C++ are the conditional statements that are used to execute codes based on some given conditions. These are crucial for controlling the flow of a program and making it responsive to different inputs

**Types of Decision-Making Statements:**
`if Statement`: Executes a block of code if a specified condition is true.
`if-else Statement`: Provides an alternative block of code to execute if the condition is false.
`Switch Statement`: Allows a variable to be tested for equality against a list of values. Each value is called a "`case`," and the variable is compared with each case value.
`Nested if-else`: You can nest if-else statements within each other for more complex conditions.

## Code: 6A *(for loop)*
```
//KANWALJEET SINGH
//ENTC B2
//EXP 6A
//23070123124
#include<iostream>
using namespace std;
int main(){
    int i;
    for (i=0;i<10;i++) {
    cout<<"HELLO WORLD("<<i+1<<")"<<"\n";
    }
    return 0;
}
```
## Output:

![Screenshot 2024-08-02 094131](https://github.com/user-attachments/assets/fdae2707-a1c3-4b87-ada9-e12f85ad62ef)


## Code: 6B *(while loop)*
```
//KANWALJEET SINGH
//ENTC B2
//EXP 6B
//23070123124
#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter a number: "<<"\n";
    cin>>i;
    while(i<=10)
    {
        cout<<" "<<"\n"<<i++;
    
    }
    return 0;
}
```

## Output:
![Screenshot 2024-08-02 094334](https://github.com/user-attachments/assets/e83d56bf-ca3e-4834-ae46-ba2a7a170054)


## Code: 6C *(do while loop)*
```
//KANWALJEET SINGH
//ENTC B2
//EXP 6C
//23070123124
#include<iostream> 
using namespace std;

int main() 
{
    int a=0;
    do {
        cout<< a << "\n";
        a=a+2;
    }
    while (a<=50); 
    return 0; 
}
```
## Output:
![Screenshot 2024-08-02 094545](https://github.com/user-attachments/assets/b1a7f249-4c10-400d-b8f6-09f7edc5b07d)


## Code: 6D *(for while loop)*
```
//KANWALJEET SINGH
//ENTC B2
//EXP 5D
//23070123124

#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=(n-1);j++)
        {
            cout<<" ";
        }
        while(k!=(2*i-1))
        {
            cout<<"* ";
            k++;
        }
        k=0;
        }
        cout<<"end1";
    
} 
```
## Output:
![Screenshot 2024-08-02 094723](https://github.com/user-attachments/assets/9a5ea4ef-a38f-4fe3-938d-81be208c79ee)


## Conclusion:
I learnt about the different decision making statements of C++ and performed tasks based on those conditions.
