

//OJ�����ԭ��
//1��IO��
//		����IO�;Ӷ�
//		Ҫдͷ�ļ�������
// ��������������Ҫȥscanf��ȡ   �����������printf���
// 
//2���ӿ���
//		����Ҫдͷ�ļ�������
//		�ύ�˺���oj��������׼���õĴ���ϲ����ٽ��б���
// ����������ͨ������������   �����һ��ͨ������ֵ�û�����Ҳ�п���������Ͳ���

//���һ������ ��һ��value �������е���value��ɾ��

//˼·1���ҵ�����value �Դ�Ų�����ݸ��� ʱ�临�Ӷ�O��N^2��
//˼·2�����±��� һһ���� ɾ��
//˼·3��srcȥ��nums�����в�����val�������ŵ�dstָ���λ�ã���++src��++dst

//int removeElement(int* nums, int numsSize, int val)
//{
//	int src = 0;
//	int dst = 0;
//	while (src < numsSize)
//	{
//		if (nums[src] != val)
//		{
//			nums[dst] = nums[src];
//			src++;
//			dst++;
//		}
//		else
//		{
//			src++;
//		}
//	}
//	return dst;
//}

//��������ȥ��
//int removeDuplicates(int* nums, int numsSize)
//{
//	int i = 0;
//	int j = 1;
//	int dst = 0;
//	while (j < numsSize)
//	{
//		if (nums[i] == nums[j])
//		{
//			++j;
//		}
//		else
//		{
//			nums[dst] = nums[i];
//			++dst;
//			i = j;
//			j++;
//		}
//	}
//	nums[dst] = nums[i];
//	++dst;
//	return dst;
//}

//�鲢����
//nums1[1,2,3,0,0,0] nums2[2,4,5]
//void merge(int* nums1, int num1Size, int m, int* nums2, int num2Size, int n)
//{
//	int end1 = m - 1;
//	int end2 = n - 1;
//	int end = m + n - 1;
//	while (end1 >= 0 && end2 >= 0)
//	{
//		if (nums1[end1] > nums2[end2])
//		{
//			nums1[end--] = nums1[end1--];
//		}
//		else
//		{
//			nums1[end--] = nums2[end2--];
//		}
//	}
//	while (end2 >= 0)
//	{
//		nums1[end--] = nums[end2--];
//	}
//}












