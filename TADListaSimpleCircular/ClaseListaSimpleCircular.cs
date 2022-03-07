using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TADListaSimple
{
    
    public class ClaseListaSimpleCircular
    {

        private int cuantos = 0;
        NodoListaSimpleCircular PrimeroenLista;
        NodoListaSimpleCircular Actual;
        NodoListaSimpleCircular UltimoenLista;
        NodoListaSimpleCircular Primero;
        public void agregaalPrincipio(NodoListaSimpleCircular nuevoNodo)
        {

            if (PrimeroenLista == null)
            {
                PrimeroenLista = nuevoNodo;
                UltimoenLista = nuevoNodo;
                cuantos++;
            }
            else
            {
                nuevoNodo.Siguiente = PrimeroenLista;
                PrimeroenLista = nuevoNodo;
                UltimoenLista = PrimeroenLista;
                cuantos++;
            }

        }
        public void agregaFinal(NodoListaSimpleCircular nuevoNodo)
        {
            if(PrimeroenLista==null)
            {
                PrimeroenLista = nuevoNodo;
                UltimoenLista = nuevoNodo;
                cuantos++;
            }
            else
            {
                Actual = PrimeroenLista;
                while(Actual.Siguiente!=null)
                {
                    Actual = Actual.Siguiente;
                }
                Actual.Siguiente = nuevoNodo;
                cuantos++;
            }


        }

        public NodoListaSimpleCircular p()
        {
            Actual = PrimeroenLista;
            return Actual;
        }
        public NodoListaSimpleCircular u()
        {
            Actual = UltimoenLista;
            return Actual;
        }
        public int damecuantos()
        {
            return cuantos;
        }

        internal string eliminaelPrimero()

        { 
        string mensaje = "";
            if (PrimeroenLista == null && Primero == null)
            {
                mensaje = "Lista Vacia";
            }else if(PrimeroenLista.Siguiente!=null)
            {
                PrimeroenLista = PrimeroenLista.Siguiente;
                Primero = PrimeroenLista.Siguiente;
                mensaje = "Se eliminó el primero";
            }else
            {
                PrimeroenLista = null;
                Primero = null;
                mensaje = "Quedo la lista vacia";
            }
            return mensaje;
        }

        internal void Insertaen(NodoListaSimpleCircular nuevoNodo, int donde,out bool quepaso)
        {
            quepaso = false;
            int estoyen = -1;

            if (PrimeroenLista == null)
            {
             
            }
            else
            {
                NodoListaSimpleCircular paso;
                Actual = PrimeroenLista;
                while (Actual.Siguiente != null)
                {
                    estoyen++;
                    if(estoyen==donde)
                    { 
                        paso = Actual.Siguiente;
                        nuevoNodo.Siguiente = paso;
                        Actual.Siguiente = nuevoNodo;
                        cuantos++;
                        break;
                    }
                    Actual = Actual.Siguiente;
                }
               
               
            }
        }

        internal string Eliminaen(int donde, out bool quepaso)
        {
            string mensaje = "";
            quepaso = false;
            int estoyen = -1;

            if(cuantos<donde)
            {
                mensaje = "Se intenta eliminar una posición inexistente";
                return mensaje;
            }

            if (PrimeroenLista == null)
            {
                return "La lista está vacia";
               
            }
            else
            {
                NodoListaSimpleCircular anterior;
                Actual = PrimeroenLista;
                anterior = PrimeroenLista;
                while (Actual.Siguiente != null)
                {
                    estoyen++;
                    if (estoyen == donde)
                    {
                        if (Actual == anterior)
                        {
                            eliminaelPrimero();
                            return "Se elimina el Primero";
                        }
                        else
                        {
                            anterior.Siguiente = Actual.Siguiente;
                            cuantos--;
                            quepaso = true;
                            mensaje = "Se eliminó corrrectamente el registro";
                            break;
                        }
                    }
                        anterior = Actual;
                    Actual = Actual.Siguiente;
                }


            }
            return mensaje;
        }

        internal void Insertaren(NodoListaSimpleCircular nuevoNodo, int donde, out bool quepaso)
        {
                quepaso = false;
                int estoyen = -1;

                if (PrimeroenLista == null)
                {

                }
                else
                {
                    NodoListaSimpleCircular paso;
                    Actual = PrimeroenLista;
                    while (Actual.Siguiente != null)
                    {
                        estoyen++;
                        if (estoyen == donde)
                        {

                            paso = Actual.Siguiente;
                            nuevoNodo.Siguiente = paso;
                            Actual.Siguiente = nuevoNodo;
                            cuantos++;
                            break;
                        }
                        Actual = Actual.Siguiente;
                    }
                }
        }
        
    }
    
}
