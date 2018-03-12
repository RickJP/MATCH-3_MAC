using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Singleton<T> : MonoBehaviour where T: MonoBehaviour {

    static T m_instance;

    public static T Instance
    {
        get
        {
            if (m_instance == null)
            {
                m_instance = GameObject.FindObjectOfType<T>();

                if (m_instance == null)
                {
                    GameObject singleton = new GameObject(typeof(T).Name);
                    m_instance = singleton.AddComponent<T>();
                }
            }
            return m_instance;
        }
    }
    

    public virtual void Awake()
    {
        if (m_instance == null)
        {
            m_instance = this as T;
            //transform.parent = null;
            /*
            If you are using persistent Singletons but still want to parent your Singleton to a 
            null object like "Managers" to stay organized, you will need to change the transform 
            parent to the root level before invoking DontDestroyOnLoad.  Otherwise, you will get 
            a warning and Unity will NOT make the object persistent.         
             */
            //DontDestroyOnLoad(this.gameObject);   //  DontDestroyOnLoad will only work for objects at the root level.  
        }
        else
        {
            Destroy(gameObject);
        }
    }

}
