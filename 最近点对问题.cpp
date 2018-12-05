//#include<iostream>
//using namespace std;
//
//
//struct point
//{
//	double x, y;
//};
//
//void sort(point a[], int n)//冒泡排序
//{
//	int i, j;
//	for (i = 0;i <= n - 2;i++)
//	{
//		for (j = 0;j <= n - 2 - i;j++)
//		{
//			point temp;
//			if (a[j].y>a[j + 1].y)
//			{
//				temp= a[j];
//				
//				a[j]= a[j + 1];
//				
//				a[j + 1] = temp;
//				
//			}
//		}
//	}
//
//}
//
//
//
//
//double point_distance(point a,point b)
//{
//	return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
//}
//
//double most_close_double_point(point p[],int low,int high,point pt[2])
//{
//	double d1, d2, d3,d;
//	int mid;
//	if (high-low==1)
//	{
//		pt[0].x = p[low].x;
//		pt[0].y = p[low].y;
//		pt[1].x = p[low + 1].x;
//		pt[1].y = p[low + 1].y;
//		return point_distance(p[low],p[low+1]);
//		
//
//	}
//	if (high-low==2)
//	{
//		d1 = point_distance(p[low], p[low + 1]);
//		d2= point_distance(p[low+1], p[high]);
//		d3= point_distance(p[low], p[high]);
//		double minpoint;
//		minpoint = d1;
//		pt[0].x = p[low].x;
//		pt[0].y = p[low].y;
//		pt[1].x = p[low + 1].x;
//		pt[1].y = p[low + 1].y;
//		if (d2<minpoint)
//		{
//			minpoint = d2;
//			pt[0].x = p[low+1].x;
//			pt[0].y = p[low+1].y;
//			pt[1].x = p[high].x;
//			pt[1].y = p[high].y;
//			
//		}
//		if (d3<minpoint)
//		{
//			minpoint = d3;
//			pt[0].x = p[low].x;
//			pt[0].y = p[low].y;
//			pt[1].x = p[high].x;
//			pt[1].y = p[high].y;
//		}
//		return  minpoint;
//
//	}
//
//	mid = (low + high) / 2;
//	d1 = most_close_double_point(p, low, mid, pt);
//	d2 = most_close_double_point(p, mid + 1, high, pt);
//	if (d1<=d2)
//	{
//		d = d1;
//
//	}
//	else
//	{
//		d = d2;
//	}
//	int index = 0;
//	int i,j;
//	point P[50];
//	for (i=mid;(i>=low)&&(p[mid].x-p[i].x<d);i--)
//	{
//		P[index] = p[i];
//		index++;
//	}
//	for (i = mid+1;(i <= high) && (p[i].x - p[mid].x < d);i++)
//	{
//		P[index] = p[i];
//		index++;
//	}
//	sort(P, index);
//	for (i=0;i<index;i++)
//	{
//		for (j=i+1;j<index;j++)
//		{
//			if (P[j].y-P[i].y>=d)
//			{
//				break;
//			}
//			else
//			{
//				d3 = point_distance(P[i],P[j]);
//				if (d3<d)
//				{
//					d = d3;
//					pt[0].x = p[i].x;
//					pt[0].y = p[i].y;
//					pt[1].x = p[j].x;
//					pt[1].y = p[j].y;
//				}
//			}
//		} 
//	}
//	return d;
//
//}
//
//
//
//
//int main()
//{
//
//	point a[4];
//	point b[2];
//	a[0].x = 1;
//	a[0].y = 1;
//	a[1].x = 2;
//	a[1].y = 2;
//	a[2].x = 5;
//	a[2].y = 7;
//	a[3].x = 4;
//	a[3].y = 7;
//	sort(a, 4);
//	
//	cout <<"最近距离是："<< most_close_double_point(a, 0, 3, b)<<endl;
//	cout << "最近点是(" << b[0].x << "," << b[0].y << ")" << "and" << "(" << b[1].x << "," << b[1].y << ")" << endl;
//
//}