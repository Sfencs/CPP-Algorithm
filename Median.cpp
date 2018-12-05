//#include<iostream>
//using namespace std;
//
//void sort(double a[],int n)//冒泡排序
//{
//	int i,j;
//	for (i = 0;i <= n-2;i++)
//	{
//		for (j = 0;j <= n - 2 - i;j++)
//		{
//			int temp;
//			if (a[j]>a[j+1])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//
//}
//
//
//
//
//double find_single_median(double a[],int n)//求一组的中位数
//{
//	
//	int Length = n;
//	
//	if (Length%2==0)
//	{
//		return(a[Length / 2 - 1] + a[Length / 2]) / 2;
//	}
//	else
//	{
//		return a[Length / 2];
//	}
//	
//}
//
//
//
//double find_median(double x[], double y[], int n)
//{
//	double median_x = find_single_median(x,n);
//	double median_y = find_single_median(y,n);
//	if (n==0)
//	{
//		return 0;
//	}
//	if (n==1)
//	{
//		return (median_x + median_y) / 2;
//	}
//	if (median_x== median_y)
//	{
//		return median_x;
//	}
//	else if (median_x < median_y)
//	{
//		if (n%2==0)
//		{
//			double *a = new double[n/2];
//			double *b = new double[n/2];
//			for (int i=0;i<n/2;i++)
//			{
//				a[i] = y[i];			
//			}
//			for (int j = 0;j < n / 2;j++)
//			{
//				b[j] = x[n/2 + j];
//			}
//			n = n / 2;
//			return find_median(b, a, n);
//		}
//		else
//		{
//			double *a = new double[n/2+1];
//			double *b = new double[n/2+1];
//			for (int i = 0;i<n/2+1;i++)
//			{
//				a[i] = y[i];
//			}
//			for (int j = 0;j < n / 2+1;j++)
//			{
//				b[j] = x[n / 2 + j];
//			}
//			n = n / 2+1;
//			return find_median(b, a, n);
//		}
//		
//	}
//	else if (median_x > median_y)
//	{
//		if (n % 2 == 0)
//		{
//			double *a = new double[n / 2];
//			double *b = new double[n / 2];
//			for (int i = 0;i<n / 2;i++)
//			{
//				a[i] = x[i];
//			}
//			for (int j = 0;j < n / 2;j++)
//			{
//				b[j] = y[n / 2 + j];
//			}
//			n = n / 2;
//			return find_median(b, a, n);
//		}
//		else
//		{
//			double *a = new double[n / 2 + 1];
//			double *b = new double[n / 2 + 1];
//			for (int i = 0;i<n / 2 + 1;i++)
//			{
//				a[i] = x[i];
//			}
//			for (int j = 0;j < n / 2 + 1;j++)
//			{
//				b[j] = y[n / 2 + j];
//			}
//			n = n / 2+1;
//			return find_median(b, a, n);
//		}
//	}
//
//}
//
//
//int main()
//
//{
//	
//	double input_first[5] = {1,2,5,4,7};
//	double input_second[5] = {6,7,4,9,2};
//	
//	sort(input_second, 5);
//	sort(input_first, 5);
//	
//	cout << "中位数为"<<find_median(input_first, input_second, 5)<<endl;
//
//	
//
//}
//
//
