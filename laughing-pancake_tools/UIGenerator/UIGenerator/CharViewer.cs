using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;

namespace UIGenerator
{
    public partial class CharViewer : Form
    {
        UnitChar m_data;

        enum CharTYPE
        {
            COST,
            DPS,
            COSTPER,
            UNDEFIND
        };


        int StartArragne;
        int EndArragne;

        CharTYPE nowChart = CharTYPE.UNDEFIND;

        public CharViewer()
        {
            InitializeComponent();
        }

        public void SetFile(UnitChar data)
        {
            m_data = data;
            StartArragne = 0;
            EndArragne = m_data.UpgradeList.Count;

            textBox1.Text = "0";
            textBox2.Text = m_data.UpgradeList.Count.ToString();
        }

        private void CharViewer_Load(object sender, EventArgs e)
        {
           
        }

        private void button2_Click(object sender, EventArgs e)
        {
            nowChart = CharTYPE.COST;
            chart1.Titles.Clear();

            foreach (var series in chart1.Series)
            {
                series.Points.Clear();
            }
            chart1.Series.Clear();
            {
                // Data arrays.
                string[] seriesArray = { "cost" };


                // Set palette.
                this.chart1.Palette = ChartColorPalette.SeaGreen;

                
                // Set title.
                this.chart1.Titles.Add(m_data.unit_name);

                // Add series.
                for (int i = 0; i < seriesArray.Length; i++)
                {
                    // Add series.
                    Series series = this.chart1.Series.Add(seriesArray[i]);

                    // Add point
                    for (int j = StartArragne; j < m_data.UpgradeList.Count; j++)
                    {
                        if (j > EndArragne)
                        {
                            break;
                        }
                        if (i == 0)
                            series.Points.Add(m_data.UpgradeList[j].Cost);
                        else
                            series.Points.Add(m_data.UpgradeList[j].dps);
                    }

                }
            }

           
            
        }

        private void button3_Click(object sender, EventArgs e)
        {
            nowChart = CharTYPE.DPS;
            chart1.Titles.Clear();

            foreach (var series in chart1.Series)
            {
                series.Points.Clear();
            }
            chart1.Series.Clear();
            {
                // Data arrays.
                string[] seriesArray = { "dps" };


                // Set palette.
                this.chart1.Palette = ChartColorPalette.Berry;

                // Set title.
                this.chart1.Titles.Add("초당 돈 증가");

                // Add series.
                for (int i = 0; i < seriesArray.Length; i++)
                {
                    // Add series.
                    Series series = this.chart1.Series.Add(seriesArray[i]);

                    // Add point
                    for (int j = StartArragne; j < m_data.UpgradeList.Count; j++)
                    {
                        if (j > EndArragne)
                        {
                            break;
                        }
                        if (i == 0)
                            series.Points.Add(m_data.UpgradeList[j].dps);
                    }

                }
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            nowChart = CharTYPE.COSTPER;
            chart1.Titles.Clear();

            foreach (var series in chart1.Series)
            {
                series.Points.Clear();
            }
            chart1.Series.Clear();
            {
                // Data arrays.
                string[] seriesArray = { "dps/Cost" };


                // Set palette.
                this.chart1.Palette = ChartColorPalette.Berry;

                // Set title.
                this.chart1.Titles.Add("효율");

                // Add series.
                for (int i = 0; i < seriesArray.Length; i++)
                {
                    // Add series.
                    Series series = this.chart1.Series.Add(seriesArray[i]);

                    // Add point
                    for (int j = StartArragne; j < m_data.UpgradeList.Count; j++)
                    {
                        if (j > EndArragne)
                        {
                            break;
                        }
                        if (i == 0)
                            series.Points.Add(m_data.UpgradeList[j].dps / m_data.UpgradeList[j].Cost);
                    }

                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {

            StartArragne = Convert.ToInt32(textBox1.Text);
            EndArragne = Convert.ToInt32(textBox2.Text);

            switch(nowChart)
            {
                case CharTYPE.COST:
                    button2_Click(null, null);
                    break;
                case CharTYPE.DPS:
                    button3_Click(null, null);
                    break;
                case CharTYPE.COSTPER:
                    button4_Click(null, null);
                    break;
                default:
                    break;
            }


            
        }

        
    }
}
