#include <iostream>

using namespace std;

int main() {

	int a,b,c,t;

	cin>>t;

	while(t>0){

	cin>>a>>b>>c;

	if(a>b&&a>c){

	 if(b>c)

	 cout<<b<<endl;

	 else

	 cout<<c<<endl;

	}

	else if(b>c&&b>a){

	 if(a>c)

	 cout<<a<<endl;

	 else

	 cout<<c<<endl;

	}

	else if(c>b&&c>a){

	 if(a>b)

	 cout<<a<<endl;

	 else

	 cout<<b<<endl;

	}

	t--;

	}

	return 0;

}

