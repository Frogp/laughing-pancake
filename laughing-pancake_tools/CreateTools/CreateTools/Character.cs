using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CreateTools
{
    class Character
    {
        private string imagePath;
        private string name;
        private string index;
        private string power;
        private string defence;
        private string speed;
        private string strength;
        private string property;
        public Character()
        {
            imagePath = "";
            name = "";
            index = "";
            power = "";
            defence = "";
            speed = "";
            strength = "";
        }
        public Character(string imagePath, string name, string index, string power, string defence, string speed, string strength)
        {
            this.imagePath = imagePath;
            this.name = name;
            this.index = index;
            this.power = power;
            this.defence = defence;
            this.speed = speed;
            this.strength = strength;
        }
        public string ImagePath
        {
            get
            {
                return imagePath;
            }
            set
            {
                imagePath = value;
            }
        }
        public string Name
        {
            get
            {
                return name;
            }
            set
            {
                name = value;
            }
        }
        public string Index
        {
            get
            {
                return index;
            }
            set
            {
                index = value;
            }
        }
        public string Power
        {
            get
            {
                return power;
            }
            set
            {
                power = value;
            }
        }
        public string Defence
        {
            get
            {
                return defence;
            }
            set
            {
                defence = value;
            }
        }
        public string Speed
        {
            get
            {
                return speed;
            }
            set
            {
                speed = value;
            }
        }
        public string Strength
        {
            get
            {
                return strength;
            }
            set
            {
                strength = value;
            }
        }
        public string Property
        {
            get
            {
                return property;
            }
            set
            {
                property = value;
            }
        }
    }
}
