#include<bits/stdc++.h>
using namespace std;

void tas(queue<int>t)
{
    cout<<"FRONT:"<<t.front()<<endl;
    cout<<"LAST: "<<t.back()<<endl<<endl;
}
void tas1(queue<int>t1)
{

   cout<<"Number:"<<t1.front()<<"  "<<endl;

}

int main()
{
  queue<int> q;
  q.push(10);
  q.push(200);
  q.push(3000);
  q.push(40000);

 /* q.pop();
  q.pop();
  q.pop();*/

  cout<<"SIZE: "<<q.size()<<endl;
  cout<<"FRONT: "<<q.front()<<endl;
  cout<<"LAST: "<<q.back()<<endl<<endl;

  tas(q);

  queue<int>q2;

  for(int i=0;i<=100;i++)
  {
      q2.push(i);
      tas1(q2);
  }





}
