#ifndef OPERACIONES_H_
#define OPERACIONES_H_

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}Employee;

/** \brief Inicializa la lista de empleados colocando el flag "isEmpty" en 1
 *
 * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \return -1 si hay error (tamaño inválido o si el puntero es nulo)
 *         0 si se pudo realizar.
 *
 */
int initEmployees(Employee* list[], int len);
/** \brief Pide al usuario que cargue los datos de los empleados y los verifica antes de cargarlos.
 *
  * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \return 0 si hubo error (tamaño del array incorrecto o puntero NULL)
 * 		   1 si la carga fue exitosa.
 *
 */
int add_newEmployee(Employee* list[], int len);
/** \brief Toma los datos introducidos por el usuario para crear el nuevo empleado. Setea el flag "isEmpty" en 0.
 *
 * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \param id int id introducido por el usuario
 * \param name char nombre del empleado
 * \param lastName char apellido del empleado
 * \param salary float salario del empleado
 * \param sector int sector del empleado
 * \return -1 si da error (tamaño del array inválido o puntero NULL)
 * 			0 si es exitoso
 *
 */
int addEmployee(Employee* list[], int len, int id, char name[],char lastName[],float salary,int sector);
/** \brief modifica el nombre, apellido, salario o sector del empleado deseado.
 *
 * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \param id int id del empleado
 * \return 0 si hay un error (puntero NULL o tamaño del array invalido)
 * 		   1 si es exitoso.
 *
 */
int modifyEmployee(Employee* list[], int len,int id);
/** \brief Busca la posición del empleada en función de su ID
 *
 * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \param id int: ID del empleado
 * \return -1 si hay error (puntero NULL o tamaño del array inválido)
 * 			la posición del empleado si lo encuentra.
 *
 */
int findEmployeeById(Employee* list[], int len,int id);
/** \brief Realiza una baja lógica del empleado seteando el flag "isEmpty" en 1
 *
 * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \param id int: ID del empleado
 * \return -1 si hay un error (tamaño del array incorrecto o puntero NULL)
 * 			0 si fue exitoso.
 *
 */
int removeEmployee(Employee* list[], int len, int id);
/** \brief ordena la lista de empleados por nombre y sector de forma alfabetica en orden descendiente o ascendiente.
 *
 * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \param id order: 0 (ascendiente) o 1 (descendiente)
 * \return -1 si hay un error (tamaño del array incorrecto o puntero NULL)
 * 			0 si fue exitoso.
 */
int sortEmployees(Employee* list[], int len, int order);
/** \brief ordena la lista de empleados alfabéticamente por nombre de forma ascendiente
 *
 * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \return void
 *
 */
void sortByNameAscend(Employee* list[],int len);
/** \brief ordena la lista de empleados alfabéticamente por nombre de forma descendiente
 *
 * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \param id int
 * \return void
 *
 */
void sortByNameDescend(Employee* list[],int len);
/** \brief ordena la lista de empleados por nombre de forma ascendiente
 *
 * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \return void
 *
 */
void sortBySectorAscend(Employee* list[],int len);
/** \brief ordena la lista de empleados por nombre de forma descendiente
 *
 * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \return void
 *
 */
void sortBySectorDescend(Employee* list[],int len);
/** \brief imprime la lista de empleados
 *
 * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \return -1 si hay un error (tamaño del array incorrecto o puntero NULL)
 * 			0 si fue exitoso.
 *
 */
int printEmployees(Employee* list[], int length);
/** \brief
 *
 * \param list Employee*: puntero al array de empleados
 * \param len int: tamaño del array
 * \return void
 *
 */
void salaryAverage(Employee* list[], int len);

void setEmployeeName(Employee* employee, char name[]);
void setEmployeeLastName(Employee* employee, char lastName[]);
void setEmployeeSalary(Employee* employee, float salary);
void setEmployeeSector(Employee* employee, int sector);




#endif /* OPERACIONES_H_ */
