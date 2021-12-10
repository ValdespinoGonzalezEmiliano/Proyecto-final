#include <stdio.h>
int main ()
{
	int op,selec1,selec2,selec3,selec4;
	do
	{
		//opciones del menu principal
		printf("\n\n\t\t\t*Under horizon* \n\n");
		printf("\t\t\t-----Menu----- \n\n");
		printf("\n %¿Que desea hacer%?\n");
		printf("1) Jugar\n");
		printf("2) creditos\n");
		printf("3) Salir\n");
		scanf("%d",&selec1);
		switch(selec1)
		{
		//La opción de jugar permite cargar el juego
		//se muestra una introduccion
		case 1:
		printf("Se seleccionó 'jugar'.\n");
		printf("en breve iniciara el juego.\n");
		printf("Una mañana, en el bosque desolado se asomaba por las montañas la gran figura de la que emerge calor (sol). Sientes la caricia del viento frio de una hermosa mañana, hueles el agradable aroma de la humedad de los verdes llanos y escuchas a lo lejos, los sonidos de los animales y de la cascada cristalina que no cesa, acompañandose en una melodica sinfonia. Mientras las demas personas saludan al salir de sus casas, la reunion del pueblo daba inicio, hoy tu (nombre del usuario) seras un soldado cuando por fin mates a la bestia de hielo… Sales a cazar en las montañas llevando un hacha contigo. En tu camino encuentras una nave que se estrello hace mucho tiempo en ese territorio. Decides explorar la nave para poder encontrar a la Bestia que habita en ese lugar, pero su interior esta muy obscuro, por lo que enciendes una farola con una mano y en la otra llevas el hacha. Encuentras una pistola de rayos laser, la tomas y la inspeccionas para ver como funciona; por descuido provocas que el arma haga un sonido que atrae la atencion de la Bestia…\n");
			//opciones turno 1
			printf("\n\n\t\t\t*Under horizon* \n\n");
			printf("\n ¿Que desea hacer?\n");
			printf("1) Sueltas el arma que habias encontrado, tomas tu hacha y apagas la farola para esconderte; para que la Bestia no te descubra.\n");
			printf("2) Escapas llevandote el arma, al huir caes, por accidente, disparas y desmayas a la bestia. Creyendola muerta le cortas un cuerno para llevarselo a Arthur como prueba de que la venciste.\n");
			printf("3) Al descubrirte la Bestia entras en panico sueltas, corres para huir de ella, afortunadamente encuentras un ducto de la nave por el que te escabulles hasta llegar a la cabina del Piloto.\n");
			printf("4) \n");
			scanf("%d",&selec2);
			switch(selec2)
			{
				//turno 1-opcion 1
				case 1:
				printf(" Sueltas el arma que habias encontrado, tomas tu hacha y apagas la farola para esconderte; para que la Bestia no te descubra.\n");
				//opciones turno 2
				printf("\n\n\t\t\t*Under horizon* \n\n");
				printf("\n ¿Que desea hacer?\n");
				printf("1) La bestia se va y escapas a toda prisa de la nave, llegas a la aldea y le relatas a Arthur lo sucedido en el interior de la nave por lo que eres expulsado de la aldea.\n");
				printf("2) Escapas de la nave, llegas a la aldea, le relatas tu experiencia a Arthur y deciden organizarse para ir a matar a la Bestia.\n");
				printf("3) Logras escapar de la nave, pero avergonzado de haber huido, decides marcharte hacia tierras mas lejanas, lejos de los habitantes de tu aldea en donde vives por largos años solo y muy triste.\n");
				printf("4) \n");
				scanf("%d",&selec3);
				switch(selec3)
				{
					case 1:
					printf(" La bestia se va y escapas a toda prisa de la nave, llegas a la aldea y le relatas a Arthur lo sucedido en el interior de la nave por lo que eres expulsado de la aldea.\n");
					//opciones turno 3
					printf("\n\n\t\t\t*Under horizon* \n\n");
					printf("\n %¿Que desea hacer%?\n");
					printf("1) Triste y derrotado abandonas la aldea y te exilias mas alla de las fronteras de las Tierras lejanas muriendo de viejo.\n");
					printf("2) Durante tu exilio, te entrenas dia a dia para desarrollar tus habilidades de guerreo y fortalecer tus musculos y asi, convertirte en el gurrero mas feroz de todos los tiempos. Regresas a la aldea en el momento que esta siendo atacada por la Bestia; a la cual, despues de un fiero combate matas, salvando a la Bestia.\n");
					printf("3) En el exilio conoces a otros habitantes de la montaña quienes te integran a su tribu, de la cual llegas a ser jefe.\n");
					printf("4) \n");
					scanf("%d",&selec4);
					switch(selec4)
					{
							//final1
							case 1:
							printf(" Triste y derrotado abandonas la aldea y te exilias mas alla de las fronteras de las Tierras lejanas muriendo de viejo.\n");
							break;
							//final2
							case 2:
							printf(" Durante tu exilio, te entrenas dia a dia para desarrollar tus habilidades de guerreo y fortalecer tus musculos y asi, convertirte en el gurrero mas feroz de todos los tiempos. Regresas a la aldea en el momento que esta siendo atacada por la Bestia; a la cual, despues de un fiero combate matas, salvando a la Bestia.\n");
							break;
							//final3
							case 3:
							printf(" En el exilio conoces a otros habitantes de la montaña quienes te integran a su tribu, de la cual llegas a ser jefe.\n");
							break;
					}
					break;
					
					case 2:
					printf(" Escapas de la nave, llegas a la aldea, le relatas tu experiencia a Arthur y deciden organizarse para ir a matar a la Bestia.\n");
					//opciones turno 3
					printf("\n\n\t\t\t*Under horizon* \n\n");
					printf("\n %¿Que desea hacer%?\n");
					printf("1) Los guerreros enfrentan a la Bestia, a la cual, tras un feroz combate en el que mueren decenas de guerreros logran aniquilar.\n");
					printf("2) Arthur organiza a los guerreros para atacar a la Bestia, la cual, mata a todos y cada uno de los guerreros, y despues destruye la aldea de las Tierras Lejanas.\n");
					printf("3) Arthur comanda el ataque contra la Bestia, la cual mata a Arthur y los guerreros mas fuertes y valientes, al final solo quedas tu, que decides engañar a la bestia para que te persiga hacia el puente de una enorme barraca, en la cual caen los dos.\n");
					printf("4) \n");
					scanf("%d",&selec4);
					switch(selec4)
					{
							//final1
							case 1:
							printf(" Los guerreros enfrentan a la Bestia, a la cual, tras un feroz combate en el que mueren decenas de guerreros logran aniquilar.\n");
							break;
							//final2
							case 2:
							printf(" Arthur organiza a los guerreros para atacar a la Bestia, la cual, mata a todos y cada uno de los guerreros, y despues destruye la aldea de las Tierras Lejanas.\n");
							break;
							//final3
							case 3:
							printf(" Arthur comanda el ataque contra la Bestia, la cual mata a Arthur y los guerreros mas fuertes y valientes, al final solo quedas tu, que decides engañar a la bestia para que te persiga hacia el puente de una enorme barraca, en la cual caen los dos.\n");
							break;
					}
					break;
					
					case 3:
					printf(" Logras escapar de la nave, pero avergonzado de haber huido, decides marcharte hacia tierras mas lejanas, lejos de los habitantes de tu aldea en donde vives por largos años solo y muy triste.\n");
					//opciones turno 3
					printf("\n\n\t\t\t*Under horizon* \n\n");
					printf("\n %¿Que desea hacer%?\n");
					printf("1) En el exilio mueres enfermo y viejo abandonado por tu tribu.\n");
					printf("2) Viviendo lejos de la aldea aprendes a sobrevivir en condiciones infrahumanas, por el clima tan gelido y la escasez de comida, lo que te convierte en una Bestia Humana sedienta de venganza, por lo que regresas y matas a la bestia.\n");
					printf("3) Llegas a los territorios de la Tribu Yoja-Yon. Ahi te integran como un miembro mas. Te casas con la hija del jefe de la tribu, tienes hijos y vives feliz.\n");
					printf("4) \n");
					scanf("%d",&selec4);
					switch(selec4)
					{
							//final1
							case 1:
							printf(" En el exilio mueres enfermo y viejo abandonado por tu tribu\n");
							break;
							//final2
							case 2:
							printf(" Viviendo lejos de la aldea aprendes a sobrevivir en condiciones infrahumanas, por el clima tan gelido y la escasez de comida, lo que te convierte en una Bestia Humana sedienta de venganza, por lo que regresas y matas a la bestia.\n");
							break;
							//final3
							case 3:
							printf(" Llegas a los territorios de la Tribu Yoja-Yon. Ahi te integran como un miembro mas. Te casas con la hija del jefe de la tribu, tienes hijos y vives feliz.\n");
							break;
					}
					break;

				}
				break;
				
			//turno 1-opcion 2
			case 2:
			printf(" Escapas llevandote el arma, al huir caes, por accidente, disparas y desmayas a la bestia. Creyendola muerta le cortas un cuerno para llevarselo a Arthur como prueba de que la venciste.\n");
			//turno 1-opcion 2-opciones turno 2
				printf("\n\n\t\t\t*Under horizon* \n\n");
				printf("\n ¿Que desea hacer?\n");
				printf("1) Regresas a la aldea y le entregas a Arthur el cuerno que le cortaste a la Bestia. El descubre que usaste una pistola laser para matar a la bestia y no tu hacha como dictan las viejas costumbres, por lo que te expulsa de la aldea.\n");
				printf("2) De regreso en la aldea, le relatas tu historia a Arthur. La bestia ataca la aldea. Huyes a esconderte entre los arboles. Arthur enfrenta a la Bestia pero la esta lo mata junto con otros guerreros. Encuentras el nucleo de la pistola laser y se lo lanzas en el hocico a la Bestia. Matandola con una gran explosion.\n");
				printf("3) Al regresar a la aldea, la Bestia te sigue para atacar la aldea y recuperar su cuerno cercenado. Su repentino ataque sorprende a todos los guerreros de la aldea, que caen muertos uno a uno ante el feroz animal.\n");
				printf("4) \n");
				scanf("%d",&selec3);
				switch(selec3)
				{
					case 1:
					printf(" Regresas a la aldea y le entregas a Arthur el cuerno que le cortaste a la Bestia. El descubre que usaste una pistola laser para matar a la bestia y no tu hacha como dictan las viejas costumbres, por lo que te expulsa de la aldea.\n");
					//opciones turno 3
					printf("\n\n\t\t\t*Under horizon* \n\n");
					printf("\n %¿Que desea hacer%?\n");
					printf("1) Durante el exilio descubres que la Bestia puede morir si se le corta el otro cuerno. Asi que regresas a contarle a Arthur quien planea el ataque y mata a la Bestia.\n");
					printf("2) En el exilio tienes un hijo, Jit-Su, a quien entrenas en combates contra los mejores guerreros. Despues de su preparacion Jit-Su regresa a tu aldea y mata la Bestia.\n");
					printf("3) En el exilio conoces a Yoo-Li, hermosa aldeana de la tribu Yuhu, que habita las tierras inhospitas del fin del mundo. Juntos forman una hermosa pareja y viven felices.\n");
					printf("4) \n");
					scanf("%d",&selec4);
					switch(selec4)
					{
							//final1
							case 1:
							printf(" Durante el exilio descubres que la Bestia puede morir si se le corta el otro cuerno. Asi que regresas a contarle a Arthur quien planea el ataque y mata a la Bestia\n");
							break;
							//final2
							case 2:
							printf(" En el exilio tienes un hijo, Jit-Su, a quien entrenas en combates contra los mejores guerreros. Despues de su preparacion Jit-Su regresa a tu aldea y mata la Bestia.\n");
							break;
							//final3
							case 3:
							printf(" En el exilio conoces a Yoo-Li, hermosa aldeana de la tribu Yuhu, que habita las tierras inhospitas del fin del mundo. Juntos forman una hermosa pareja y viven felices.\n");
							break;
					}
					break;
					
					case 2:
					printf(" De regreso en la aldea, le relatas tu historia a Arthur. La bestia ataca la aldea. Huyes a esconderte entre los arboles. Arthur enfrenta a la Bestia pero la esta lo mata junto con otros guerreros. Encuentras el nucleo de la pistola laser y se lo lanzas en el hocico a la Bestia. Matandola con una gran explosion.\n");
					//opciones turno 3
					printf("\n\n\t\t\t*Under horizon* \n\n");
					printf("\n %¿Que desea hacer%?\n");
					printf("1) Muerta la bestia y muerto Arthur la tribu reconoce tu valentia y te nombra sucesor de Arthur. Reinas con sabiduria y valor durante mas de 40 años.\n");
					printf("2) Al morir Arthur, su sucesor ordena tu muerte por celos de tu valentia, logras escapar del ataque y te rebelas contra el nuevo jefe al que derrocas y te proclamas jefe de las Tierras Lejanas.\n");
					printf("3) El nuevo jefe de la tribu Mau-Chin-Gong te nombra jefe maximo de los guerreros de la aldea. Te conviertes en un legendario guerrero que conquisto todos los territorios del norte.\n");
					printf("4) \n");
					scanf("%d",&selec4);
					switch(selec4)
					{
							//final1
							case 1:
							printf(" Muerta la bestia y muerto Arthur la tribu reconoce tu valentia y te nombra sucesor de Arthur. Reinas con sabiduria y valor durante mas de 40 años.\n");
							break;
							//final2
							case 2:
							printf(" Al morir Arthur, su sucesor ordena tu muerte por celos de tu valentia, logras escapar del ataque y te rebelas contra el nuevo jefe al que derrocas y te proclamas jefe de las Tierras Lejanas.\n");
							break;
							//final3
							case 3:
							printf(" El nuevo jefe de la tribu Mau-Chin-Gong te nombra jefe maximo de los guerreros de la aldea. Te conviertes en un legendario guerrero que conquisto todos los territorios del norte.\n");
							break;
					}
					break;
					
					case 3:
					printf(" -	Al regresar a la aldea, la Bestia te sigue para atacar la aldea y recuperar su cuerno cercenado. Su repentino ataque sorprende a todos los guerreros de la aldea, que caen muertos uno a uno ante el feroz animal.\n");
					//opciones turno 3
					printf("\n\n\t\t\t*Under horizon* \n\n");
					printf("\n %¿Que desea hacer%?\n");
					printf("1) Decides enfrentar a la Bestia que se encuentra mal herida, con el hacha de Arthur y logras matar a la Bestia.\n");
					printf("2) Ante la eminente derrota ante la Bestia, lidereas la fuga de la tribu hacia tierras mas seguras, lejos del ataque de la Bestia.\n");
					printf("3) Enfrentas a la Bestia y la dejas mal herida. Decides curarla para convertirla en un animal de trabajo. Con su excepcional fuerza la Bestia ayuda a hacer grandes construcciones en beneficio de la tribu.\n");
					printf("4) \n");
					scanf("%d",&selec4);
					switch(selec4)
					{
							//final1
							case 1:
							printf(" Decides enfrentar a la Bestia que se encuentra mal herida, con el hacha de Arthur y logras matar a la Bestia.\n");
							break;
							//final2
							case 2:
							printf(" Ante la eminente derrota ante la Bestia, lidereas la fuga de la tribu hacia tierras mas seguras, lejos del ataque de la Bestia.\n");
							break;
							//final3
							case 3:
							printf(" Enfrentas a la Bestia y la dejas mal herida. Decides curarla para convertirla en un animal de trabajo. Con su excepcional fuerza la Bestia ayuda a hacer grandes construcciones en beneficio de la tribu.\n");
							break;
					}
					break;
				}
			break;
			
			//turno 1-opcion 3
			case 3:
			printf(" Al descubrirte la Bestia entras en panico sueltas, corres para huir de ella, afortunadamente encuentras un ducto de la nave por el que te escabulles hasta llegar a la cabina del Piloto.\n");
			//turno 1-opcion 3-opciones turno 2
				printf("\n\n\t\t\t*Under horizon* \n\n");
				printf("\n ¿Que desea hacer?\n");
				printf("1) Logras encender la nave y la logras volar durante algunos minutos hasta que te estrellas en la montaña. No te pasa nada durante el choque y huyes hacia la aldea.\n");
				printf("2) Por mas esfuerzos que realizas, no logras encender la nave. La Bestia te encuentra y te mata.\n");
				printf("3) Logras encender la nave, la tripulas durante unos minutos y la haces estrellar contra la Bestia, matandola con la explosion del choque, que ilumina todo el cielo de la zona de las Tierras Lejanas.\n");
				printf("4) \n");
				scanf("%d",&selec3);
				switch(selec3)
				{
					case 1:
					printf(" Logras encender la nave y la logras volar durante algunos minutos hasta que te estrellas en la montaña. No te pasa nada durante el choque y huyes hacia la aldea.\n");
					//opciones turno 3
					printf("\n\n\t\t\t*Under horizon* \n\n");
					printf("\n %¿Que desea hacer%?\n");
					printf("1) Al llegar a la aldea, Arthur te expulsa de ella y te marchas hacia los territorios del fin del mundo.\n");
					printf("2) Antes de huir hacia la aldea, encuentras el nucleo de poder de la nave, el cual entregas a Arthur, que lo utiliza para matar a la Bestia.\n");
					printf("3) De regreso a aldea, Arthur organiza un ataque relampago contra la Bestia, que fracasa y termina con la muerte de todos los habitantes de la aldea.\n");
					printf("4) \n");
					scanf("%d",&selec4);
					switch(selec4)
					{
							//final1
							case 1:
							printf(" Al llegar a la aldea, Arthur te expulsa de ella y te marchas hacia los territorios del fin del mundo.\n");
							break;
							//final2
							case 2:
							printf(" Antes de huir hacia la aldea, encuentras el nucleo de poder de la nave, el cual entregas a Arthur, que lo utiliza para matar a la Bestia.\n");
							break;
							//final3
							case 3:
							printf(" De regreso a aldea, Arthur organiza un ataque relampago contra la Bestia, que fracasa y termina con la muerte de todos los habitantes de la aldea.\n");
							break;
					}
					break;
					
					case 2:
					printf(" Por mas esfuerzos que realizas, no logras encender la nave. La Bestia te encuentra y te mata.\n");
					//opciones turno 3
					printf("\n\n\t\t\t*Under horizon* \n\n");
					printf("\n %¿Que desea hacer%?\n");
					printf("1) La Bestia se dirige a la aldea y mata a todos los aldeanos\n");
					printf("2) Los aldeanos guerreros unen esfuerzos y matan a la Bestia, te hacen un homenaje postumo\n");
					printf("3) Al ver que no regresas, Arthur va a la nave y mata a la Bestia.\n");
					printf("4) \n");
					scanf("%d",&selec4);
					switch(selec4)
					{
							//final1
							case 1:
							printf(" Mueres en el choque de la nave contra la bestia.\n");
							break;
							//final2
							case 2:
							printf(" Te salvas del choque, regresas a la aldea y le relatas tu historia a Arthur, quien te expulsa de la aldea por no obedecer las viejas costumbres.\n");
							break;
							//final3
							case 3:
							printf(" Sobrevives a la explosion del choque de la nave, regresas a la aldea que te recibe como a un heroe y destierra a Arthur por quererte imponer sus viejas costumbres.\n");
							break;
					}
					break;
					
					case 3:
					printf(" Logras encender la nave, la tripulas durante unos minutos y la haces estrellar contra la Bestia, matandola con la explosion del choque, que ilumina todo el cielo de la zona de las Tierras Lejanas.\n");
					//opciones turno 3
					printf("\n\n\t\t\t*Under horizon* \n\n");
					printf("\n %¿Que desea hacer%?\n");
					printf("1) Mueres en el choque de la nave contra la bestia.\n");
					printf("2) Te salvas del choque, regresas a la aldea y le relatas tu historia a Arthur, quien te expulsa de la aldea por no obedecer las viejas costumbres\n");
					printf("3) Sobrevives a la explosion del choque de la nave, regresas a la aldea que te recibe como a un heroe y destierra a Arthur por quererte imponer sus viejas costumbres.\n");
					printf("4) \n");
					scanf("%d",&selec4);
					switch(selec4)
					{
							//final1
							case 1:
							printf(" \n");
							break;
							//final2
							case 2:
							printf(" \n");
							break;
							//final3
							case 3:
							printf(" \n");
							break;
					}
					break;	
				}
				break;
			}

		//creditos se muestra la informacion acerca de los diseñadores del proyecto
		case 2:
		printf("Se seleccionó 'creditos'.\n");
		printf("\n\n\t\t\tCreditos \n\n");
		printf("\n\t\t\tCreador:Valdespino Gonzalez Emiliano \n\n");
		printf("\t\t\tAsesor:Marco Antonio Martinez Quintana \n\n");
			
		printf("\n\n\t\t\trefeencias \n\n");
		printf("-Ardao,J, (2001). Programación en C. http://gssi.det.uvigo.es/users/mlnores/public_html/manual-C.pdf \n");
		printf("-Gracia, E y Solano, J. (2021). Guías prácticas de estudio. UNAM(FI). http://lcp02.fi-b.unam.mx/ \n");
		printf("-Rodríguez, E. (2019 ).Teoría de Juegos en la Toma de Decisiones Racionales. Capitulo I. https://steemit.com/steemstem/@exqueila/teoria-de-juegos-en-la-toma-de-decisiones-racionales-capitulo-i \n");
		printf("-Tocino García, J. T., & Palomo Duarte, M. (2010). Gosu games: creando un videojuego en C++. https://rodin.uca.es/handle/10498/17235 \n");
		printf("-Urrutia, G. A. M., López, C. E. N., Martínez, L. F. F., & Corral, M. A. R. (2015). Procesos de desarrollo para videojuegos. Cultura Científica y Tecnológica, (37). https://148.210.21.18/ojs/index.php/culcyt/article/view/299 \n");
		printf(" EA.(2020)..Apex legends. \n");

		break;
		
		//Si el usario desa cerrar el programa
		case 3:
		printf("\tSalir\n");
		break;
		
		default:
		printf("\tOpción inválida.\n");
		}
	}
	while (op != 3);
}