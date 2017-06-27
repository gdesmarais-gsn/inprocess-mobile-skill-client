using System.Collections.Generic;
using System;

namespace GSN.Skill.Games.Common.Utils {

    /** Generic pool class*/
    public class ObjectPool<T> {

        /** Public accessor to know the current count of the queue */
        public int Count {
            get {
                return m_queue.Count;
            }
            private set {

            }
        }

        private int objectsGot; // how many objects clients have got from us.
        private int objectsReturned;   // how many objects clients have returned to us.

        public int LiveObjects {
            get {
                return objectsGot - objectsReturned;
            }
        }

        /** Pool queue */
        private Queue<T> m_queue;

        /** Basic constructor to initialize the queue */
        public ObjectPool() {
            m_queue = new Queue<T>();
        }

        /** 
        * Return an item to the pool
        * @param _object item to add
        */
        public void ReturnObject(T _object) {

            if (_object != null) {
                ++objectsReturned;
                m_queue.Enqueue(_object);
            }
        }

        /** 
        * Get an item from the pool
        * @return item returned
        */
        public T GetObject() {
            ++objectsGot;

            if (m_queue.Count > 0) {
                return m_queue.Dequeue();
            } else {
                return Activator.CreateInstance<T>();
            }
        }

        /**
        * Check if object is already in the pool
        * @param object to check
        * @return true if it's in the pool
        */
        public bool Contains(T _object) {

            return m_queue.Contains(_object);
        }

        public void Clear() {
            m_queue.Clear();
        }

    }
}
