#include<cstdio>
#include<queue>

#define rei register int
using namespace std;
int n, t, m, x;
int temp_nation[1000005];
int ans;

struct node {
    int s, t;
    //made in china
};
queue <node> ship;
node h;

int main() {
    scanf("%d", &n);
    for (rei i = 1; i <= n; i++) {
        cin >> t >> m;
        while (!ship.empty())//ֻҪ�����˾ͶԶ��н��м��
        {
            h = ship.front();//ѭ��ȡ��ͷ������ʱ���ǵ��������ģ�
            if (h.t + 86400 <= t)//�����ʱ���⣨����������������Դ𰸺Ͷ��н��и��£�ɾ����
            {
                temp_nation[h.s]--;//�����������������1����Ϊ�ⲻ��24Сʱ�ڵ��ˣ�
                if (temp_nation[h.s] == 0) ans--;//����������û�����ˣ��������1��֮ǰ�ǹ���
                ship.pop();//�������ʱ������̭���˸�����
                continue;//��Ϊ�ǵ��������ģ������п��ܻ����У�����ȥ��
            }
            break;//������������24Сʱ�ڣ�����Ŀ϶�Ҳ����������ֱ���˳�
        }
        for (rei j = 1; j <= m; ++j) //����ǰ������ǾͶ���ֻ����Ĵ�����ͳ��
        {
            scanf("%d", &x);//�������
            h.s = x, h.t = t;//����ṹ��
            ship.push(h);//������ˣ��ṹ�壩���������
            temp_nation[x]++;//����������˼�1��Ͱ��˼�룩
            if (temp_nation[x] == 1) ans++;//�����������ǣ���ԣ���һ�γ��֣���ô��������
        }
        printf("%d\n", ans);//ģ�������Ժ�������
    }
    return 0;
}
