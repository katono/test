#include <cstdio>

/*!
 * @brief hello, worldを出力する
 *
 * @startuml
 *
 * [*] -right-> FINISHED : create
 * FINISHED -right-> READY : start
 * READY --> RUNNING : dispatch
 * RUNNING --> READY : preempted
 * RUNNING -right-> WAITING : wait
 * WAITING --> READY : release from waiting
 * RUNNING --> FINISHED : finish
 * FINISHED --> [*] : destroy
 *
 * @enduml
 */
void hello()
{
	std::printf("hello, world\n");
}

/*!
 * @brief main関数
 * @return 0を返す
 */
int main()
{
	hello();
	return 0;
}
