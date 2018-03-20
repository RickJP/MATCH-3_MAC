using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticlePlayer : MonoBehaviour {

    public ParticleSystem[] allParticles;
    public float lifetime = 1f;
    public bool destroyImmediately = true;

	// Use this for initialization
	void Start ()
    {
        allParticles = GetComponentsInChildren<ParticleSystem>();

        if (destroyImmediately) 
        {
            Destroy(gameObject, lifetime);
        }          
	}

    public void Play()
    {
        foreach (ParticleSystem ps in allParticles)
        {
            ps.Play();
            ps.Stop();
        }

        Destroy(gameObject, lifetime);
    }
}
