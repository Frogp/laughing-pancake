namespace CreateTool
{
    partial class CharacterTool
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다.
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
        /// </summary>
        private void InitializeComponent()
        {
            this.button_save = new System.Windows.Forms.Button();
            this.checkedListBox = new System.Windows.Forms.CheckedListBox();
            this.textBox_strength = new System.Windows.Forms.TextBox();
            this.textBox_speed = new System.Windows.Forms.TextBox();
            this.textBox_defence = new System.Windows.Forms.TextBox();
            this.textBox_power = new System.Windows.Forms.TextBox();
            this.textBox_name = new System.Windows.Forms.TextBox();
            this.textBox_index = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.pictureBox = new System.Windows.Forms.PictureBox();
            this.button1 = new System.Windows.Forms.Button();
            this.treeView = new System.Windows.Forms.TreeView();
            this.button2 = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox)).BeginInit();
            this.SuspendLayout();
            // 
            // button_save
            // 
            this.button_save.Location = new System.Drawing.Point(26, 340);
            this.button_save.Name = "button_save";
            this.button_save.Size = new System.Drawing.Size(219, 31);
            this.button_save.TabIndex = 0;
            this.button_save.Text = "Save";
            this.button_save.UseVisualStyleBackColor = true;
            this.button_save.Click += new System.EventHandler(this.button_save_Click);
            // 
            // checkedListBox
            // 
            this.checkedListBox.CheckOnClick = true;
            this.checkedListBox.FormattingEnabled = true;
            this.checkedListBox.Items.AddRange(new object[] {
            "Fire",
            "Wind",
            "Water",
            "Land"});
            this.checkedListBox.Location = new System.Drawing.Point(380, 224);
            this.checkedListBox.Name = "checkedListBox";
            this.checkedListBox.Size = new System.Drawing.Size(120, 84);
            this.checkedListBox.TabIndex = 3;
            this.checkedListBox.SelectedIndexChanged += new System.EventHandler(this.checkedListBox1_SelectedIndexChanged);
            // 
            // textBox_strength
            // 
            this.textBox_strength.Location = new System.Drawing.Point(380, 193);
            this.textBox_strength.Name = "textBox_strength";
            this.textBox_strength.Size = new System.Drawing.Size(120, 25);
            this.textBox_strength.TabIndex = 4;
            this.textBox_strength.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // textBox_speed
            // 
            this.textBox_speed.Location = new System.Drawing.Point(380, 162);
            this.textBox_speed.Name = "textBox_speed";
            this.textBox_speed.Size = new System.Drawing.Size(120, 25);
            this.textBox_speed.TabIndex = 5;
            this.textBox_speed.TextChanged += new System.EventHandler(this.textBox2_TextChanged);
            // 
            // textBox_defence
            // 
            this.textBox_defence.Location = new System.Drawing.Point(380, 131);
            this.textBox_defence.Name = "textBox_defence";
            this.textBox_defence.Size = new System.Drawing.Size(120, 25);
            this.textBox_defence.TabIndex = 6;
            this.textBox_defence.TextChanged += new System.EventHandler(this.textBox3_TextChanged);
            // 
            // textBox_power
            // 
            this.textBox_power.Location = new System.Drawing.Point(380, 100);
            this.textBox_power.Name = "textBox_power";
            this.textBox_power.Size = new System.Drawing.Size(120, 25);
            this.textBox_power.TabIndex = 7;
            this.textBox_power.TextChanged += new System.EventHandler(this.textBox4_TextChanged);
            // 
            // textBox_name
            // 
            this.textBox_name.Location = new System.Drawing.Point(380, 69);
            this.textBox_name.Name = "textBox_name";
            this.textBox_name.Size = new System.Drawing.Size(120, 25);
            this.textBox_name.TabIndex = 8;
            this.textBox_name.TextChanged += new System.EventHandler(this.textBox5_TextChanged);
            // 
            // textBox_index
            // 
            this.textBox_index.Location = new System.Drawing.Point(380, 38);
            this.textBox_index.Name = "textBox_index";
            this.textBox_index.Size = new System.Drawing.Size(120, 25);
            this.textBox_index.TabIndex = 9;
            this.textBox_index.TextChanged += new System.EventHandler(this.textBox6_TextChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("굴림", 13F);
            this.label1.Location = new System.Drawing.Point(288, 233);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(86, 22);
            this.label1.TabIndex = 10;
            this.label1.Text = "Property";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("굴림", 13F);
            this.label2.Location = new System.Drawing.Point(288, 196);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(0, 22);
            this.label2.TabIndex = 11;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("굴림", 13F);
            this.label3.Location = new System.Drawing.Point(288, 165);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(66, 22);
            this.label3.TabIndex = 12;
            this.label3.Text = "Speed";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("굴림", 13F);
            this.label4.Location = new System.Drawing.Point(288, 134);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(86, 22);
            this.label4.TabIndex = 13;
            this.label4.Text = "Defence";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("굴림", 13F);
            this.label5.Location = new System.Drawing.Point(288, 103);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(68, 22);
            this.label5.TabIndex = 14;
            this.label5.Text = "Power";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("굴림", 13F);
            this.label6.Location = new System.Drawing.Point(288, 72);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(62, 22);
            this.label6.TabIndex = 15;
            this.label6.Text = "Name";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("굴림", 13F);
            this.label7.Location = new System.Drawing.Point(288, 41);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(89, 22);
            this.label7.TabIndex = 16;
            this.label7.Text = "ChrIndex";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("굴림", 13F);
            this.label8.Location = new System.Drawing.Point(288, 196);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(86, 22);
            this.label8.TabIndex = 17;
            this.label8.Text = "Strength";
            // 
            // pictureBox
            // 
            this.pictureBox.Location = new System.Drawing.Point(26, 41);
            this.pictureBox.Name = "pictureBox";
            this.pictureBox.Size = new System.Drawing.Size(236, 228);
            this.pictureBox.TabIndex = 18;
            this.pictureBox.TabStop = false;
            this.pictureBox.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("굴림", 11F);
            this.button1.Location = new System.Drawing.Point(84, 275);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(113, 33);
            this.button1.TabIndex = 19;
            this.button1.Text = "ImageLoad";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // treeView
            // 
            this.treeView.Location = new System.Drawing.Point(517, 28);
            this.treeView.Name = "treeView";
            this.treeView.Size = new System.Drawing.Size(275, 344);
            this.treeView.TabIndex = 20;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(274, 341);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(225, 30);
            this.button2.TabIndex = 21;
            this.button2.Text = "JSON FILE CREATE";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // CharacterTool
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(804, 384);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.treeView);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.pictureBox);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.textBox_index);
            this.Controls.Add(this.textBox_name);
            this.Controls.Add(this.textBox_power);
            this.Controls.Add(this.textBox_defence);
            this.Controls.Add(this.textBox_speed);
            this.Controls.Add(this.textBox_strength);
            this.Controls.Add(this.checkedListBox);
            this.Controls.Add(this.button_save);
            this.Name = "CharacterTool";
            this.Text = "CharacterTool";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button_save;
        private System.Windows.Forms.CheckedListBox checkedListBox;
        private System.Windows.Forms.TextBox textBox_strength;
        private System.Windows.Forms.TextBox textBox_speed;
        private System.Windows.Forms.TextBox textBox_defence;
        private System.Windows.Forms.TextBox textBox_power;
        private System.Windows.Forms.TextBox textBox_name;
        private System.Windows.Forms.TextBox textBox_index;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.PictureBox pictureBox;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TreeView treeView;
        private System.Windows.Forms.Button button2;
    }
}

