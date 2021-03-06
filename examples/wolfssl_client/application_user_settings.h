/*
 * example
 */
#ifndef APPLICATION_USER_SETTINGS_H
#define APPLICATION_USER_SETTINGS_H


#ifdef __cplusplus
extern "C" {
#endif

#undef WOLFSSL_RIOT_OS
#define WOLFSSL_RIOT_OS

#undef NO_MAIN_DRIVER
#define NO_MAIN_DRIVER

#undef HAVE_ECC
#define HAVE_ECC

#undef TFM_TIMING_RESISTANT
#define TFM_TIMING_RESISTANT

#undef ECC_TIMING_RESISTANT
#define ECC_TIMING_RESISTANT

#undef WC_RSA_BLINDING
#define WC_RSA_BLINDING

#undef SINGLE_THREADED
#define SINGLE_THREADED

#undef NO_FILESYSTEM
#define NO_FILESYSTEM

#undef USE_CERT_BUFFERS_2048
#define USE_CERT_BUFFERS_2048

#ifdef __cplusplus
}
#endif

#endif /* APPLICATION_USER_SETTINGS_H */
