//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> max_sequence;
//int max_sum = 0;
//int sum=0;
//
//int main()
//{
//	vector<int> Sequence = { -2,11,-4,13,-5,-2
//	};
//	for (int i = 0;i < Sequence.size();i++)
//	{
//		for (int j = i;j < Sequence.size();j++)
//		{
//			for (int k=i;k<=j;k++)
//			{
//				sum += Sequence[k];
//				if (sum > max_sum)
//				{
//					max_sum = sum;
//					int a = 0;
//					max_sequence.clear();
//					for (int l=i;l<=k;l++)
//					{				
//						max_sequence.push_back(Sequence[l]);
//							a++;
//					}
//				}
//			}
//			sum = 0;
//		}
//	}
//	cout << "最大子段和为:" << max_sum << endl;
//	
//	if (max_sequence.size()==0)
//	{
//		cout << "子段全为负数" << endl;
//	}
//	else
//	{
//		cout << "子段为:" << endl;
//		for (int i = 0;i < max_sequence.size();i++)
//		{
//			cout << max_sequence[i] << "  ";
//		}
//	}
//
//	return 0;
//}