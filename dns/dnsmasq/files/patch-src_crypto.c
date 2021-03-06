--- src/crypto.c.orig	2018-10-18 18:21:55 UTC
+++ src/crypto.c
@@ -275,6 +275,10 @@ static int dnsmasq_ecdsa_verify(struct blockdata *key_
   static struct ecc_point *key_256 = NULL, *key_384 = NULL;
   static mpz_t x, y;
   static struct dsa_signature *sig_struct;
+#if NETTLE_VERSION_MAJOR == 3 && NETTLE_VERSION_MINOR < 4
+#define nettle_get_secp_256r1() (&nettle_secp_256r1)
+#define nettle_get_secp_384r1() (&nettle_secp_384r1)
+#endif
   
   if (!sig_struct)
     {
@@ -294,7 +298,7 @@ static int dnsmasq_ecdsa_verify(struct blockdata *key_
 	  if (!(key_256 = whine_malloc(sizeof(struct ecc_point))))
 	    return 0;
 	  
-	  nettle_ecc_point_init(key_256, &nettle_secp_256r1);
+	  nettle_ecc_point_init(key_256, nettle_get_secp_256r1());
 	}
       
       key = key_256;
@@ -307,7 +311,7 @@ static int dnsmasq_ecdsa_verify(struct blockdata *key_
 	  if (!(key_384 = whine_malloc(sizeof(struct ecc_point))))
 	    return 0;
 	  
-	  nettle_ecc_point_init(key_384, &nettle_secp_384r1);
+	  nettle_ecc_point_init(key_384, nettle_get_secp_384r1());
 	}
       
       key = key_384;
