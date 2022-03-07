using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TADListaSimple
{
    public partial class Form1 : Form
    {

        ClaseListaSimpleCircular Lista = new ClaseListaSimpleCircular();
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)

        {

        }

        private void btnAgrega_Click(object sender, EventArgs e)
        {
            if (valida())
            {

                Lista.agregaFinal(new NodoListaSimpleCircular(Convert.ToInt32(TxtLegajo.Text), TxtNombre.Text, TxtApellido.Text, TxtCategoria.Text, TxtArea.Text));
                actualizarList();
                lblCuantos.Text = "Nodos existentes: " + Lista.damecuantos().ToString();
            }
        }

        private void actualizarList()
        {
            listBox1.Items.Clear();
            NodoListaSimpleCircular Actual;
            NodoListaSimpleCircular Primero;
            if (Lista.u() != null)
            {
                Actual = Lista.u();
                Primero = Lista.p();
                while (Actual.Siguiente != null && Primero != null)
                {
                    string item1 = Actual.ToString() + ", " + Actual.Siguiente.Leg();
                    this.listBox1.Items.Add(item1);
                    Actual = Actual.Siguiente;
                }
                if (Primero != null)
                {
                    string item = Actual.ToString() + "apunta a " + Primero.Leg();
                    this.listBox1.Items.Add(item);
                }
                else
                {
                    this.listBox1.Items.Clear();
                }
                limpiarcontroles();
            }
        }

        private void limpiarcontroles()
        {
            TxtLegajo.Text = "";
            TxtNombre.Text = String.Empty;
            TxtApellido.Text = "";
            TxtCategoria.Text = "";
            TxtArea.Text = "";
            TxtLegajo.Focus();
        }

        private bool valida()
        {
            bool ok = true;
            if (TxtLegajo.Text == "" || TxtNombre.Text == "" || TxtApellido.Text == "")
            {
                ok = false;
            }
            return ok;
        }

        private void btnSalir_Click(object sender, EventArgs e)
        {
            this.Close();
        }



        private void btnBuscar_Click(object sender, EventArgs e)
        {
            NodoListaSimpleCircular Actual;
            if (Lista.p() != null)
            {
                int posicion = -1;
                Actual = Lista.p();
                while (Actual.Siguiente != null)
                {
                    posicion++;
                    if (comboBox1.SelectedItem.ToString() == "Apellido")
                    {
                        if (txtBuscar.Text == Actual.Ape())
                        {
                            MessageBox.Show("La clave buscada: " + txtBuscar.Text + " se encuentra en la posición " + posicion.ToString());
                            break;
                        }

                    }



                    if (comboBox1.SelectedItem.ToString() == "Nombre")
                    {
                        if (txtBuscar.Text == Actual.Nom())
                        {
                            MessageBox.Show("La clave buscada: " + txtBuscar.Text + " se encuentra en la posición " + posicion.ToString());
                            break;
                        }

                    }



                    if (comboBox1.SelectedItem.ToString() == "Legajo")
                    {
                        if (txtBuscar.Text == Actual.Leg())
                        {
                            MessageBox.Show("La clave buscada: " + txtBuscar.Text + " se encuentra en la posición " + posicion.ToString());
                            break;
                        }

                    }
                    Actual = Actual.Siguiente;
                }

                if (txtBuscar.Text == Actual.Ape())
                {
                    MessageBox.Show("La clave buscada: " + txtBuscar.Text + " se encuentra en la posición " + posicion.ToString());

                }
                else if (txtBuscar.Text == Actual.Nom())
                {
                    MessageBox.Show("La clave buscada: " + txtBuscar.Text + " se encuentra en la posición " + posicion.ToString());

                }
                else if (txtBuscar.Text == Actual.Leg())
                {
                    MessageBox.Show("La clave buscada: " + txtBuscar.Text + " se encuentra en la posición " + posicion.ToString());

                }
                else if (txtBuscar.Text == Actual.Cate())
                {
                    MessageBox.Show("La clave buscada: " + txtBuscar.Text + " se encuentra en la posición " + posicion.ToString());

                }
                else if (txtBuscar.Text == Actual.Are())
                {
                    MessageBox.Show("La clave buscada: " + txtBuscar.Text + " se encuentra en la posición " + posicion.ToString());

                }
                else
                {
                    MessageBox.Show("La clave buscada: " + txtBuscar.Text + "NO se encuentra ");

                }


            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (valida())
            {

                Lista.agregaalPrincipio(new NodoListaSimpleCircular(Convert.ToInt32(TxtLegajo.Text), TxtNombre.Text, TxtApellido.Text, TxtCategoria.Text, TxtArea.Text));
                limpiarcontroles();
                actualizarList();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show(Lista.eliminaelPrimero());
            limpiarcontroles();
            actualizarList();
        }

        private void btnInsertaen_Click(object sender, EventArgs e)
        {
            if (valida())
            {
                bool resultado = false;
                int donde = Convert.ToInt32(txtposicion.Text);
                Lista.Insertaren(new NodoListaSimpleCircular(Convert.ToInt32(TxtLegajo.Text), TxtNombre.Text, TxtApellido.Text, TxtCategoria.Text, TxtArea.Text), donde, out resultado);
                limpiarcontroles();
                actualizarList();
            }
        }

        private void btnEliminaen_Click(object sender, EventArgs e)
        {
            bool resultado = false;
            int donde = Convert.ToInt32(txtposicion.Text);
            MessageBox.Show(   Lista.Eliminaen( donde, out resultado));
            limpiarcontroles();
            actualizarList();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void TxtNombre_KeyPress(object sender, KeyPressEventArgs e)
        {
            solo_letras.Comprobacion(e);
        }

        private void TxtApellido_KeyPress(object sender, KeyPressEventArgs e)
        {
            solo_letras.Comprobacion(e);
        }

        private void TxtCategoria_KeyPress(object sender, KeyPressEventArgs e)
        {
            solo_letras.Comprobacion(e);
        }

        private void TxtArea_KeyPress(object sender, KeyPressEventArgs e)
        {
            solo_letras.Comprobacion(e);
        }

        private void TxtLegajo_KeyPress(object sender, KeyPressEventArgs e)
        {
            solo_numeros.Comprobacion(e);
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
