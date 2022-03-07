using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TADListaSimple
{
    public class NodoListaSimpleCircular
    {
        private int Legajo;
        private string Nombre;
        private string Apellido;
        private string Categoria;
        private string Area;
        public  NodoListaSimpleCircular Siguiente;

        public NodoListaSimpleCircular()
        {
            Siguiente = null;
        }
        public NodoListaSimpleCircular(int Le, string No, string Ap, string Cat, string Ar)
        {
            Legajo = Le;
            Nombre = No;
            Apellido = Ap;
            Categoria = Cat;
            Area = Ar;
            Siguiente = null;
        }
        public string Leg()
        {
            return Legajo.ToString();
        }
        public string Nom()
        {
            return Nombre;
        }
        public string Ape()
        {
            return Apellido;
        }
        public string Cate()
        {
            return Categoria;
        }
        public string Are()
        {
            return Area;
        }
        public override string ToString()
        {
            return Legajo.ToString() + "," + Nombre + "," + Apellido + "," + Categoria + "," + Area;
        }

    }
}
