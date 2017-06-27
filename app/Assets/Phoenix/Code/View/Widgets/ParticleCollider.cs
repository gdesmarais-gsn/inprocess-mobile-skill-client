using UnityEngine;

[RequireComponent(typeof(Collider2D))]
[RequireComponent(typeof(ParticleSystem))]
public class ParticleCollider : MonoBehaviour
{
    private ParticleSystem particleSystem;
    private Collider2D collider;

    void Start()
    {
        particleSystem = GetComponent<ParticleSystem>();
        collider = GetComponent<Collider2D>();
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other != collider)
        {
            particleSystem.Stop();
        }
    }

    void OnTriggerExit2D(Collider2D other)
    {
        if (other != collider)
        {
            particleSystem.Play();
        }
    }
}