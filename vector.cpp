#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define nl cout<<"\n"

void vector_print(vector<int>vec) // vector printing function
{
	for (int i = 0; i < vec.size(); ++i)
	{
		cout<<vec[i]<<' ';
	}
	nl;
}

vector<int> prefix_sum(vector<int>vec) // vector return type and prefix sum function
{
	vector<int>pre_sum;
	int curr=vec[0];
	for (int i = 1; i < vec.size(); ++i)
	{
		curr=curr+vec[i];
		pre_sum.push_back(curr);
	}
	return pre_sum; //return vector from function
}

int32_t main()
{
	int n;
	cout<<"Enter vector size : ";
	cin>>n;
	vector<int>v;
	cout<<"Enter vector elements : ";
	// taking input
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	cout<<"printing vector : ";
	vector_print(v); //vector print function calling

	cout<<"vector size : ";
	cout<<v.size();
	nl;

	cout<<"sort a vector ascending order : ";
	sort(v.begin(), v.end());
	vector_print(v);

	cout<<"sort a vector descending order : ";
	sort(v.rbegin(), v.rend());
	vector_print(v);

	cout<<"reverse a vector : ";
	reverse(v.begin(), v.end());
	vector_print(v);

	// vector prefix sum
	vector<int> prefix_sum_vector;
	cout<<"prefix sum of vector : ";
	prefix_sum_vector = prefix_sum(v); //calling funtion
	vector_print(prefix_sum_vector);

	//inserting at end
	int value;
	cout<<"Enter value to insert at end: ";
	cin>>value;
	v.push_back(value);
	cout<<"after inserting at value the end : ";
	vector_print(v);


	//inserting at beginning
	cout<<"Enter value to insert at front: ";
	cin>>value;
	v.insert(v.begin(), value);
	cout<<"after inserting at value the end : ";
	vector_print(v);

	//inserting at any position
	int position;
	cout<<"Enter value and position: ";
	cin>>value>>position;
	if(position>v.size())
	{
		cout<<"invalid position";nl;
	}
	else
	{
		v.insert(v.begin()+position-1, value);
		cout<<"after inserting at value the end : ";
		vector_print(v);
	}

	cout<<"first element : "<<v.front();nl;
	cout<<"last element : "<<v.back();nl;

	// removing the first elememt
	v.erase(v.begin());
	cout<<"after removing first element : ";
	vector_print(v);

	// removing the last element
	v.pop_back();
	cout<<"after removing last element : ";
	vector_print(v);

	// removing element from any position
	cout<<"Enter position to delete : ";
	cin>>position;
	v.erase(v.begin()+position-1);
	if(position>v.size())
	{
		cout<<"invalid position";nl;
	}
	else
    {
        cout<<"after removing from position "<<position<<" : ";
        vector_print(v);
    }


	// removing all elements from the vector
	v.clear();
	cout<<"after clearing all the element : ";
	vector_print(v);

	return 0;
}
