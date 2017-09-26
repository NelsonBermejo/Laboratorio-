struct Usuario
{
char nombre[50];
char nik[50];
char correo[50];
char clave[50];
int estado;//para saber si esta vacio;
};
typedef struct Usuario eUsuario;

struct Comentario
{
    int id;//numero de comentarios
    char comentario[50];
    int ContadorMegusta;
};
typedef struct Comentario eComentario;

int menu();

void altaUsuario(eUsuario InicializacionDelUsuario[],int posicion);


