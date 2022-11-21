using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;


#if UNITY_EDITOR
[CustomEditor(typeof(EventDispatcher))]
public class EventDispatcherEditor : Editor
{
    

    protected bool showMoreDebug = true;
    protected EventDispatcher myScript;


    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        myScript = target as EventDispatcher;
        DrawCustomDebug();
    }


    private void DrawCustomDebug()
    {
        GUILayout.Space(20);
        showMoreDebug = EditorGUILayout.Foldout(showMoreDebug, "Show Debug Seting");

        if (showMoreDebug)
        {
            GUILayout.BeginHorizontal();
            if (GUILayout.Button("Show Debug"))
            {
                myScript.ShowDebug();
            }
            if (GUILayout.Button("Show Callback Counting"))
            {
                myScript.ShowCallbackCounting();
            }
            GUILayout.EndHorizontal();
        }
    }

}
#endif