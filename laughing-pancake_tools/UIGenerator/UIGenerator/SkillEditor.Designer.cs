namespace UIGenerator
{
    partial class SkillEditor
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
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.listBox2 = new System.Windows.Forms.ListBox();
            this.listBox3 = new System.Windows.Forms.ListBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.button7 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.label4 = new System.Windows.Forms.Label();
            this.SkillDescibe = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.SkillTitle = new System.Windows.Forms.TextBox();
            this.SkillNum = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.button6 = new System.Windows.Forms.Button();
            this.EffectDiscription = new System.Windows.Forms.TextBox();
            this.label9 = new System.Windows.Forms.Label();
            this.button2 = new System.Windows.Forms.Button();
            this.EffectName = new System.Windows.Forms.TextBox();
            this.label8 = new System.Windows.Forms.Label();
            this.EffectNum = new System.Windows.Forms.TextBox();
            this.label14 = new System.Windows.Forms.Label();
            this.button5 = new System.Windows.Forms.Button();
            this.button8 = new System.Windows.Forms.Button();
            this.button9 = new System.Windows.Forms.Button();
            this.EffectValue = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.SuspendLayout();
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 12;
            this.listBox1.Location = new System.Drawing.Point(12, 12);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(156, 676);
            this.listBox1.TabIndex = 0;
            this.listBox1.SelectedIndexChanged += new System.EventHandler(this.listBox1_SelectedIndexChanged);
            // 
            // listBox2
            // 
            this.listBox2.FormattingEnabled = true;
            this.listBox2.ItemHeight = 12;
            this.listBox2.Location = new System.Drawing.Point(8, 20);
            this.listBox2.Name = "listBox2";
            this.listBox2.Size = new System.Drawing.Size(375, 304);
            this.listBox2.TabIndex = 1;
            this.listBox2.SelectedIndexChanged += new System.EventHandler(this.listBox2_SelectedIndexChanged);
            // 
            // listBox3
            // 
            this.listBox3.FormattingEnabled = true;
            this.listBox3.ItemHeight = 12;
            this.listBox3.Location = new System.Drawing.Point(5, 151);
            this.listBox3.Name = "listBox3";
            this.listBox3.Size = new System.Drawing.Size(375, 268);
            this.listBox3.TabIndex = 2;
            this.listBox3.SelectedIndexChanged += new System.EventHandler(this.listBox3_SelectedIndexChanged);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.button7);
            this.groupBox1.Controls.Add(this.button3);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.SkillDescibe);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.SkillTitle);
            this.groupBox1.Controls.Add(this.SkillNum);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.listBox3);
            this.groupBox1.Location = new System.Drawing.Point(174, 12);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(389, 467);
            this.groupBox1.TabIndex = 3;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "스킬 정보";
            // 
            // button7
            // 
            this.button7.Location = new System.Drawing.Point(196, 425);
            this.button7.Name = "button7";
            this.button7.Size = new System.Drawing.Size(184, 33);
            this.button7.TabIndex = 11;
            this.button7.Text = "삭제하기";
            this.button7.UseVisualStyleBackColor = true;
            this.button7.Click += new System.EventHandler(this.button7_Click);
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(199, 109);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(184, 33);
            this.button3.TabIndex = 11;
            this.button3.Text = "수정하기";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(6, 85);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(56, 12);
            this.label4.TabIndex = 8;
            this.label4.Text = "Skill 설명";
            // 
            // SkillDescibe
            // 
            this.SkillDescibe.Location = new System.Drawing.Point(83, 82);
            this.SkillDescibe.Name = "SkillDescibe";
            this.SkillDescibe.Size = new System.Drawing.Size(300, 21);
            this.SkillDescibe.TabIndex = 7;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(6, 58);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(56, 12);
            this.label3.TabIndex = 6;
            this.label3.Text = "Skill 제목";
            // 
            // SkillTitle
            // 
            this.SkillTitle.Location = new System.Drawing.Point(83, 55);
            this.SkillTitle.Name = "SkillTitle";
            this.SkillTitle.Size = new System.Drawing.Size(300, 21);
            this.SkillTitle.TabIndex = 5;
            // 
            // SkillNum
            // 
            this.SkillNum.Location = new System.Drawing.Point(83, 27);
            this.SkillNum.Name = "SkillNum";
            this.SkillNum.ReadOnly = true;
            this.SkillNum.Size = new System.Drawing.Size(300, 21);
            this.SkillNum.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(6, 30);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(56, 12);
            this.label1.TabIndex = 0;
            this.label1.Text = "Skill 번호";
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.EffectValue);
            this.groupBox2.Controls.Add(this.label6);
            this.groupBox2.Controls.Add(this.button8);
            this.groupBox2.Controls.Add(this.button6);
            this.groupBox2.Controls.Add(this.EffectDiscription);
            this.groupBox2.Controls.Add(this.label9);
            this.groupBox2.Controls.Add(this.button2);
            this.groupBox2.Controls.Add(this.EffectName);
            this.groupBox2.Controls.Add(this.label8);
            this.groupBox2.Controls.Add(this.EffectNum);
            this.groupBox2.Controls.Add(this.label14);
            this.groupBox2.Controls.Add(this.listBox2);
            this.groupBox2.Location = new System.Drawing.Point(569, 12);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(389, 494);
            this.groupBox2.TabIndex = 14;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "스킬 효과";
            // 
            // button6
            // 
            this.button6.Location = new System.Drawing.Point(8, 410);
            this.button6.Name = "button6";
            this.button6.Size = new System.Drawing.Size(184, 33);
            this.button6.TabIndex = 10;
            this.button6.Text = "<<<<<<<    스킬적용하기";
            this.button6.UseVisualStyleBackColor = true;
            this.button6.Click += new System.EventHandler(this.button6_Click);
            // 
            // EffectDiscription
            // 
            this.EffectDiscription.Location = new System.Drawing.Point(83, 383);
            this.EffectDiscription.Name = "EffectDiscription";
            this.EffectDiscription.Size = new System.Drawing.Size(300, 21);
            this.EffectDiscription.TabIndex = 9;
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(20, 386);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(57, 12);
            this.label9.TabIndex = 8;
            this.label9.Text = "스킬 설명";
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(200, 449);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(184, 33);
            this.button2.TabIndex = 7;
            this.button2.Text = "수정하기";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // EffectName
            // 
            this.EffectName.Location = new System.Drawing.Point(83, 356);
            this.EffectName.Name = "EffectName";
            this.EffectName.Size = new System.Drawing.Size(300, 21);
            this.EffectName.TabIndex = 6;
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(20, 359);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(57, 12);
            this.label8.TabIndex = 5;
            this.label8.Text = "스킬 이름";
            // 
            // EffectNum
            // 
            this.EffectNum.Location = new System.Drawing.Point(83, 329);
            this.EffectNum.Name = "EffectNum";
            this.EffectNum.ReadOnly = true;
            this.EffectNum.Size = new System.Drawing.Size(300, 21);
            this.EffectNum.TabIndex = 1;
            // 
            // label14
            // 
            this.label14.AutoSize = true;
            this.label14.Location = new System.Drawing.Point(20, 332);
            this.label14.Name = "label14";
            this.label14.Size = new System.Drawing.Size(57, 12);
            this.label14.TabIndex = 0;
            this.label14.Text = "효과 번호";
            // 
            // button5
            // 
            this.button5.Location = new System.Drawing.Point(12, 694);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(156, 33);
            this.button5.TabIndex = 12;
            this.button5.Text = "새로만들기";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // button8
            // 
            this.button8.Location = new System.Drawing.Point(198, 410);
            this.button8.Name = "button8";
            this.button8.Size = new System.Drawing.Size(184, 33);
            this.button8.TabIndex = 11;
            this.button8.Text = "새로 만들기";
            this.button8.UseVisualStyleBackColor = true;
            this.button8.Click += new System.EventHandler(this.button8_Click);
            // 
            // button9
            // 
            this.button9.Location = new System.Drawing.Point(768, 694);
            this.button9.Name = "button9";
            this.button9.Size = new System.Drawing.Size(184, 33);
            this.button9.TabIndex = 12;
            this.button9.Text = "저장하기";
            this.button9.UseVisualStyleBackColor = true;
            this.button9.Click += new System.EventHandler(this.button9_Click);
            // 
            // EffectValue
            // 
            this.EffectValue.Location = new System.Drawing.Point(10, 461);
            this.EffectValue.Name = "EffectValue";
            this.EffectValue.Size = new System.Drawing.Size(184, 21);
            this.EffectValue.TabIndex = 13;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(8, 449);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(45, 12);
            this.label6.TabIndex = 12;
            this.label6.Text = "효과 값";
            // 
            // SkillEditor
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(965, 745);
            this.Controls.Add(this.button9);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.listBox1);
            this.Name = "SkillEditor";
            this.Text = "SkillEditor";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.SkillEditor_FormClosing);
            this.Load += new System.EventHandler(this.SkillEditor_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.ListBox listBox2;
        private System.Windows.Forms.ListBox listBox3;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.TextBox SkillNum;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.TextBox EffectName;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.TextBox EffectNum;
        private System.Windows.Forms.Label label14;
        private System.Windows.Forms.TextBox EffectDiscription;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox SkillTitle;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox SkillDescibe;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button6;
        private System.Windows.Forms.Button button5;
        private System.Windows.Forms.Button button7;
        private System.Windows.Forms.Button button8;
        private System.Windows.Forms.Button button9;
        private System.Windows.Forms.TextBox EffectValue;
        private System.Windows.Forms.Label label6;
    }
}