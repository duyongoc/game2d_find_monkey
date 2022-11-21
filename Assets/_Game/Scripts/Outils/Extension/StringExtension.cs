using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StringValueAttribute : Attribute
{
    public string StringValue { get; protected set; }

    public StringValueAttribute(string value)
    {
        this.StringValue = value;
    }
}


public static class StringExtension
{

    public static String ConvertToString(this Enum value)
    {
        return Enum.GetName(value.GetType(), value);
    }

    public static EnumType ConverToEnum<EnumType>(this String enumValue)
    {
        return (EnumType)Enum.Parse(typeof(EnumType), enumValue);
    }

}
