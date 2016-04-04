namespace UIGenerator
{
    partial class TitleEditor
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.groupBox5 = new System.Windows.Forms.GroupBox();
            this.TitleName = new System.Windows.Forms.TextBox();
            this.label24 = new System.Windows.Forms.Label();
            this.button14 = new System.Windows.Forms.Button();
            this.button13 = new System.Windows.Forms.Button();
            this.UnitSkillnum = new System.Windows.Forms.TextBox();
            this.listBox5 = new System.Windows.Forms.ListBox();
            this.label27 = new System.Windows.Forms.Label();
            this.TitleNumber = new System.Windows.Forms.TextBox();
            this.label28 = new System.Windows.Forms.Label();
            this.button9 = new System.Windows.Forms.Button();
            this.SkillTitle = new System.Windows.Forms.TextBox();
            this.label26 = new System.Windows.Forms.Label();
            this.SkillDescribe = new System.Windows.Forms.TextBox();
            this.label25 = new System.Windows.Forms.Label();
            this.SkillNum = new System.Windows.Forms.TextBox();
            this.label23 = new System.Windows.Forms.Label();
            this.listBox4 = new System.Windows.Forms.ListBox();
            this.EffectInfo = new System.Windows.Forms.TextBox();
            this.button1 = new System.Windows.Forms.Button();
            this.groupBox4.SuspendLayout();
            this.groupBox5.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.EffectInfo);
            this.groupBox4.Controls.Add(this.groupBox5);
            this.groupBox4.Controls.Add(this.button9);
            this.groupBox4.Controls.Add(this.SkillTitle);
            this.groupBox4.Controls.Add(this.label26);
            this.groupBox4.Controls.Add(this.SkillDescribe);
            this.groupBox4.Controls.Add(this.label25);
            this.groupBox4.Controls.Add(this.SkillNum);
            this.groupBox4.Controls.Add(this.label23);
            this.groupBox4.Controls.Add(this.listBox4);
            this.groupBox4.Location = new System.Drawing.Point(12, 12);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(679, 426);
            this.groupBox4.TabIndex = 37;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "스킬리스트";
            // 
            // groupBox5
            // 
            this.groupBox5.Controls.Add(this.TitleName);
            this.groupBox5.Controls.Add(this.label24);
            this.groupBox5.Controls.Add(this.button14);
            this.groupBox5.Controls.Add(this.button13);
            this.groupBox5.Controls.Add(this.UnitSkillnum);
            this.groupBox5.Controls.Add(this.listBox5);
            this.groupBox5.Controls.Add(this.label27);
            this.groupBox5.Controls.Add(this.TitleNumber);
            this.groupBox5.Controls.Add(this.label28);
            this.groupBox5.Location = new System.Drawing.Point(321, 20);
            this.groupBox5.Name = "groupBox5";
            this.groupBox5.Size = new System.Drawing.Size(344, 394);
            this.groupBox5.TabIndex = 58;
            this.groupBox5.TabStop = false;
            this.groupBox5.Text = "타이틀 정보";
            // 
            // TitleName
            // 
            this.TitleName.Location = new System.Drawing.Point(121, 270);
            this.TitleName.Name = "TitleName";
            this.TitleName.Size = new System.Drawing.Size(217, 21);
            this.TitleName.TabIndex = 67;
            // 
            // label24
            // 
            this.label24.AutoSize = true;
            this.label24.Location = new System.Drawing.Point(60, 300);
            this.label24.Name = "label24";
            this.label24.Size = new System.Drawing.Size(55, 12);
            this.label24.TabIndex = 66;
            this.label24.Text = "SkillNum";
            // 
            // button14
            // 
            this.button14.Location = new System.Drawing.Point(160, 369);
            this.button14.Name = "button14";
            this.button14.Size = new System.Drawing.Size(146, 20);
            this.button14.TabIndex = 65;
            this.button14.Text = "적용하기";
            this.button14.UseVisualStyleBackColor = true;
            this.button14.Click += new System.EventHandler(this.button14_Click);
            // 
            // button13
            // 
            this.button13.Location = new System.Drawing.Point(6, 369);
            this.button13.Name = "button13";
            this.button13.Size = new System.Drawing.Size(148, 20);
            this.button13.TabIndex = 59;
            this.button13.Text = "추가하기";
            this.button13.UseVisualStyleBackColor = true;
            this.button13.Click += new System.EventHandler(this.button13_Click);
            // 
            // UnitSkillnum
            // 
            this.UnitSkillnum.Location = new System.Drawing.Point(121, 297);
            this.UnitSkillnum.Name = "UnitSkillnum";
            this.UnitSkillnum.ReadOnly = true;
            this.UnitSkillnum.Size = new System.Drawing.Size(217, 21);
            this.UnitSkillnum.TabIndex = 61;
            // 
            // listBox5
            // 
            this.listBox5.FormattingEnabled = true;
            this.listBox5.ItemHeight = 12;
            this.listBox5.Location = new System.Drawing.Point(6, 22);
            this.listBox5.Name = "listBox5";
            this.listBox5.Size = new System.Drawing.Size(332, 208);
            this.listBox5.TabIndex = 59;
            this.listBox5.SelectedIndexChanged += new System.EventHandler(this.listBox5_SelectedIndexChanged);
            // 
            // label27
            // 
            this.label27.AutoSize = true;
            this.label27.Location = new System.Drawing.Point(52, 273);
            this.label27.Name = "label27";
            this.label27.Size = new System.Drawing.Size(63, 12);
            this.label27.TabIndex = 59;
            this.label27.Text = "TitleName";
            // 
            // TitleNumber
            // 
            this.TitleNumber.Location = new System.Drawing.Point(121, 243);
            this.TitleNumber.Name = "TitleNumber";
            this.TitleNumber.Size = new System.Drawing.Size(217, 21);
            this.TitleNumber.TabIndex = 62;
            // 
            // label28
            // 
            this.label28.AutoSize = true;
            this.label28.Location = new System.Drawing.Point(41, 251);
            this.label28.Name = "label28";
            this.label28.Size = new System.Drawing.Size(74, 12);
            this.label28.TabIndex = 60;
            this.label28.Text = "TitleNumber";
            // 
            // button9
            // 
            this.button9.Location = new System.Drawing.Point(6, 295);
            this.button9.Name = "button9";
            this.button9.Size = new System.Drawing.Size(309, 20);
            this.button9.TabIndex = 52;
            this.button9.Text = "선택하기";
            this.button9.UseVisualStyleBackColor = true;
            this.button9.Click += new System.EventHandler(this.button9_Click);
            // 
            // SkillTitle
            // 
            this.SkillTitle.Location = new System.Drawing.Point(86, 213);
            this.SkillTitle.Name = "SkillTitle";
            this.SkillTitle.ReadOnly = true;
            this.SkillTitle.Size = new System.Drawing.Size(229, 21);
            this.SkillTitle.TabIndex = 57;
            // 
            // label26
            // 
            this.label26.AutoSize = true;
            this.label26.Location = new System.Drawing.Point(13, 217);
            this.label26.Name = "label26";
            this.label26.Size = new System.Drawing.Size(66, 12);
            this.label26.TabIndex = 56;
            this.label26.Text = "Skill Name";
            // 
            // SkillDescribe
            // 
            this.SkillDescribe.Location = new System.Drawing.Point(86, 240);
            this.SkillDescribe.Name = "SkillDescribe";
            this.SkillDescribe.ReadOnly = true;
            this.SkillDescribe.Size = new System.Drawing.Size(229, 21);
            this.SkillDescribe.TabIndex = 55;
            // 
            // label25
            // 
            this.label25.AutoSize = true;
            this.label25.Location = new System.Drawing.Point(25, 243);
            this.label25.Name = "label25";
            this.label25.Size = new System.Drawing.Size(55, 12);
            this.label25.TabIndex = 54;
            this.label25.Text = "Describe";
            // 
            // SkillNum
            // 
            this.SkillNum.Location = new System.Drawing.Point(86, 186);
            this.SkillNum.Name = "SkillNum";
            this.SkillNum.ReadOnly = true;
            this.SkillNum.Size = new System.Drawing.Size(229, 21);
            this.SkillNum.TabIndex = 53;
            // 
            // label23
            // 
            this.label23.AutoSize = true;
            this.label23.Location = new System.Drawing.Point(4, 189);
            this.label23.Name = "label23";
            this.label23.Size = new System.Drawing.Size(77, 12);
            this.label23.TabIndex = 52;
            this.label23.Text = "Skill Number";
            // 
            // listBox4
            // 
            this.listBox4.FormattingEnabled = true;
            this.listBox4.ItemHeight = 12;
            this.listBox4.Location = new System.Drawing.Point(6, 20);
            this.listBox4.Name = "listBox4";
            this.listBox4.Size = new System.Drawing.Size(309, 160);
            this.listBox4.TabIndex = 0;
            this.listBox4.SelectedIndexChanged += new System.EventHandler(this.listBox4_SelectedIndexChanged);
            // 
            // EffectInfo
            // 
            this.EffectInfo.Location = new System.Drawing.Point(86, 268);
            this.EffectInfo.Name = "EffectInfo";
            this.EffectInfo.ReadOnly = true;
            this.EffectInfo.Size = new System.Drawing.Size(229, 21);
            this.EffectInfo.TabIndex = 61;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(12, 445);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(679, 36);
            this.button1.TabIndex = 38;
            this.button1.Text = "저장하기";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // TitleEditor
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(702, 493);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.groupBox4);
            this.Name = "TitleEditor";
            this.Text = "TitleEditor";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.TitleEditor_FormClosing);
            this.groupBox4.ResumeLayout(false);
            this.groupBox4.PerformLayout();
            this.groupBox5.ResumeLayout(false);
            this.groupBox5.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.GroupBox groupBox5;
        private System.Windows.Forms.TextBox TitleName;
        private System.Windows.Forms.Label label24;
        private System.Windows.Forms.Button button14;
        private System.Windows.Forms.Button button13;
        private System.Windows.Forms.TextBox UnitSkillnum;
        private System.Windows.Forms.ListBox listBox5;
        private System.Windows.Forms.Label label27;
        private System.Windows.Forms.TextBox TitleNumber;
        private System.Windows.Forms.Label label28;
        private System.Windows.Forms.Button button9;
        private System.Windows.Forms.TextBox SkillTitle;
        private System.Windows.Forms.Label label26;
        private System.Windows.Forms.TextBox SkillDescribe;
        private System.Windows.Forms.Label label25;
        private System.Windows.Forms.TextBox SkillNum;
        private System.Windows.Forms.Label label23;
        private System.Windows.Forms.ListBox listBox4;
        private System.Windows.Forms.TextBox EffectInfo;
        private System.Windows.Forms.Button button1;
    }
}