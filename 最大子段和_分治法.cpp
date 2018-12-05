//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> max_sequence;
//
//int func(vector<int> S)
//{
//
//	if (S.size()==1)
//	{
//		return S[0];
//	}
//	int l_max, r_max, center_max;
//	int center = S.size() / 2;
//	vector<int> L;
//	for (int i = 0;i < center;i++)
//	{
//		L.push_back(S[i]);
//	}
//	l_max = func(L);
//	vector<int> R;
//	for (int i = center;i < S.size();i++)
//	{
//		R.push_back(S[i]);
//	}
//	r_max = func(R);
//	int Lsum=0;
//	int max_Lsum=0;
//	for (int i= center-1;i>=0;i--)
//	{
//		
//			
//		Lsum += S[i];
//		if (Lsum > max_Lsum)
//		{
//			max_Lsum = Lsum;			
//		}    
//		
//	}
//	int Rsum = 0;
//	int max_Rsum = 0;
//	for (int i = center;i < S.size();i++)
//	{
//		Rsum += S[i];
//		if (Rsum > max_Rsum)
//		{
//			max_Rsum = Rsum;
//		}
//	}
//	center_max = max_Lsum + max_Rsum;
//	int MAX = r_max;
//	if (l_max>r_max)
//	{	
//		MAX = l_max;
//	}
//	if (center_max > MAX)
//	{
//		MAX = center_max;
//	}
//	return MAX;
//
//}
//
//
//
//int main()
//{
//
//
//
//	vector<int> Sequence = { -2,11,-4,13,-5,-2
//	};
//	bool y =true;
//	for (int i = 0;i < Sequence.size();i++)
//	{
//		if (i >= 0)
//		{
//			y = false;
//		}
//	}
//	if (y == true)
//	{
//		cout << 0 << endl;
//	}
//	else
//	{
//		cout << func(Sequence);
//	}
//	return 0;
//}