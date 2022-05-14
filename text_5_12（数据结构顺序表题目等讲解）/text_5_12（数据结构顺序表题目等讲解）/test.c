

//OJ分类和原理
//1，IO型
//		考试IO型居多
//		要写头文件主函数
// 测试用例：我们要去scanf获取   结果：我们用printf输出
// 
//2，接口型
//		不需要写头文件主函数
//		提交了后会和oj服务器上准备好的代码合并，再进行编译
// 测试用例：通过参数过来的   结果：一般通过返回值拿回来，也有可能是输出型参数

//随机一个数组 给一个value 将数组中等于value的删除

//思路1：找到所有value 以此挪动数据覆盖 时间复杂度O（N^2）
//思路2：造新变量 一一遍历 删除
//思路3：src去找nums数组中不等于val的数，放到dst指向的位置，再++src，++dst

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

//有序数组去重
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

//归并排序
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












