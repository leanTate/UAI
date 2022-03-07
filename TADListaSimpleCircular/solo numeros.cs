using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TADListaSimple
{
    public class solo_numeros
    {
            public static void Comprobacion(KeyPressEventArgs e)
            {
                if (Char.IsNumber(e.KeyChar) || Char.IsControl(e.KeyChar))
                {
                    e.Handled = false;
                    return;
                }
                else
                {
                    e.Handled = true;
                }
            }
        }
}
