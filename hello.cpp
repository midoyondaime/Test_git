#include <iostream>
#include <vector>
using namespace std;

/*int main() {

  // initializer list
  vector<int> vector1 = {1, 2, 3, 4, 5};

  // uniform initialization
  vector<int> vector2{6, 7, 8, 9, 10};

  // method 3
  vector<int> vector3(5, 12);

  cout << "vector1 = ";

  // ranged loop
  for (const int& i : vector1) 
  {
    cout << i << "  ";
  }

  cout << "\nvector2 = ";

  // ranged loop
  for (const int& i : vector2) 
  {
    cout << i << "  ";
  }

  cout << "\nvector3 = ";

  // ranged loop
  for (int i : vector3) 
  {
    cout << i << "  ";
  }

vector1.erase(vector1.begin()+1);

cout << "\nvector1 = ";

  // ranged loop
  for (const int& i : vector1) 
  {
    cout << i << "  ";
  }

  return 0;
}*/

/*int main()
{

vector<int> test={ 1 ,2 ,7 ,2,8,9,9,9,10,11,1,0};
vector<int> final;
int compt=0;
final.push_back(test.at(0));
int i,j;

///cout<<test.size();
for(i=1;i<test.size();i++)
{
  for(j=0;j<final.size();j++)
  {
          if(test.at(i)==final.at(j)) compt++ ;

  }

  if(compt==0) final.push_back(test.at(i));
  compt=0;
  

}


for(int f:final)
   {
    cout<<endl<<f;
   }
//for(int i:test)
  // {
   // cout<<endl<<i;
  // }


    return 0;
}*/

/*int main()
{

int n;

cin>>n;

vector<vector<int>> matrix( n, vector<int> (n,n));

for (vector<int> vect1D : matrix)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }    
        cout << endl;
    }



}*/

int main ()
{
  vector <string> phrase={"home","sweet","home"};
  int i,j;
  for(i=0;i<phrase.size();i++)

  {
    (phrase[i][0])= (phrase[i][0]-32);
  }

  for(string s:phrase)
  {
    cout<<s<<" ";
  }

}
