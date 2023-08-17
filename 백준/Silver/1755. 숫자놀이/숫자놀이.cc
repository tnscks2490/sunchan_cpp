#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string fuc(string s);

int main() {

	int N, M;
	cin >> N >> M;
	vector <string>v;
	vector <string>t;
	for (int i = N; i <= M; i++)
	{
		string tmp;
		tmp = to_string(i);
		if (i < 10)
		{
			v.push_back(fuc(tmp)+" "+tmp);
		}
		else if(i > 9)
		{
			string s,t,r;
			t = tmp[0];
			r = tmp[1];
			s = fuc(t) + " " + fuc(r) + tmp;
			v.push_back(s);
		}
	}
	sort(v.begin(), v.end());
	/*for (int i = 0; i < v.size(); i++)
	{
		string tmp ="";
		for (int j = 0; j < 2; j++)
		{
			if (v[i].find("one") != string::npos)
			{
				int num = v[i].find("one");
				tmp += "1";
				v[i].erase(v[i].begin()+num, v[i].begin()+num+3);
			}
			else if (v[i].find("two") != string::npos)
			{
				int num = v[i].find("two");
				tmp += "2";
				v[i].erase(v[i].begin() + num, v[i].begin() + num + 3);
			}
			else if (v[i].find("three") != string::npos)
			{
				int num = v[i].find("three");
				tmp += "3";
				v[i].erase(v[i].begin() + num, v[i].begin() + num + 5);
			}
			else if (v[i].find("four") != string::npos)
			{
				int num = v[i].find("four");
				tmp += "4";
				v[i].erase(v[i].begin() + num, v[i].begin() + num + 4);
			}
			else if (v[i].find("five") != string::npos)
			{
				int num = v[i].find("five");
				tmp += "5";
				v[i].erase(v[i].begin() + num, v[i].begin() + num + 4);
			}
			else if (v[i].find("six") != string::npos)
			{
				int num = v[i].find("six");
				tmp += "6";
				v[i].erase(v[i].begin() + num, v[i].begin() + num + 3);
			}
			else if (v[i].find("seven") != string::npos)
			{
				int num = v[i].find("seven");
				tmp += "7";
				v[i].erase(v[i].begin() + num, v[i].begin() + num + 5);
			}
			else if (v[i].find("eight") != string::npos)
			{
				int num = v[i].find("eight");
				tmp += "8";
				v[i].erase(v[i].begin() + num, v[i].begin() + num + 5);
			}
			else if (v[i].find("nine") != string::npos)
			{
				int num = v[i].find("nine");
				tmp += "9";
				v[i].erase(v[i].begin() + num, v[i].begin() + num + 4);
			}
			else if (v[i].find("zero") != string::npos)
			{
				int num = v[i].find("zero");
				tmp += "0";
				v[i].erase(v[i].begin() + num, v[i].begin() + num + 4);
			}
		}
		t.push_back(tmp);
		
	}*/
	int index = 0;
	for (int i = 0; i < v.size(); i++)
	{
		string tmp = v[i];
		if (tmp[tmp.length() - 2] == ' ')
		{
			cout << tmp.back() << " ";
		}
		else if (tmp[tmp.length() - 2] != ' ')
		{
			cout << tmp.substr(tmp.length() - 2, 2) << " ";
		}
		index++;
		if (index == 10)
		{
			index = 0;
			cout << "\n";
		}
		
	}
	return 0;
}



string fuc(string s)
{
	
	if (s == "0")
	{
		return "zero";
	}
	else if (s == "1")
	{
		return "one";
	}
	else if (s == "2")
	{
		return "two";
	}
	else if (s == "3")
	{
		return "three";
	}
	else if (s == "4")
	{
		return "four";
	}
	else if (s == "5")
	{
		return "five";
	}
	else if (s == "6")
	{
		return "six";
	}
	else if (s == "7")
	{
		return "seven";
	}
	else if (s == "8")
	{
		return "eight";
	}
	else if (s == "9")
	{
		return "nine";
	}
}