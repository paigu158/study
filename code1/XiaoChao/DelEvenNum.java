import java.util.*;

public class DelEvenNum {
	public static void main(String[] args)
	{
		 final int TESTNUM = 20;//测试数据为20个
		 
		 ArrayList<Integer> testNum = new ArrayList<Integer>();//创建泛型数组列表实例
		 
		//产生测试数据 范围 0-100
		 for(int index = 0;index < TESTNUM;index++)
		 {
			 int n = (int)(Math.random()*100);//产生随机数
			 testNum.add(n);
		 }
		 
		 //输出原始测试数据
		 for(Integer x : testNum)
				System.out.print(x+" ");
		 System.out.println();
		 
		DeltleEven(testNum);//删除偶数
		
		//输出删除偶数后测试数据
		for(Integer x : testNum)
			System.out.print(x+" ");
		
	}
	
	//删除数组中的所有偶数
	public static void DeltleEven(ArrayList<Integer> data)
	{
		for(int index = 0;index < data.size();)
		{
			if(data.get(index).intValue() % 2 == 0)
			{
				data.remove(index);//删除偶数，且后一个元素前移
			}
			else
			{
				index++;
			}
		}
	}
	
	
}

