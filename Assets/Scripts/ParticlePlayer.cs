using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticlePlayer : MonoBehaviour {

    public ParticleSystem[] allParticles;
    public float lifetime = 1f;

	// Use this for initialization
	void Start ()
    {
        allParticles = GetComponentsInChildren<ParticleSystem>();

        Destroy(gameObject, lifetime);
	}

    public void Play()
    {
        foreach (ParticleSystem ps in allParticles)
        {
            ps.Play();
            ps.Stop();
        }
    }
}
