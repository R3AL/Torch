typedef enum
{ 
	// 1xx: Information
	HTTP_CONTINUE = 100,
	HTTP_SWITCHING_PROTOCOLS,
	HTTP_CHECKPOINT = 103,

	// 2xx: Successful
	HTTP_OK = 200,
	HTTP_CREATED,
	HTTP_ACCEPTED,
	HTTP_NON_AUTHORITATIVE_INFORMATION,
	HTTP_NO_CONTENT,
	HTTP_RESET_CONTENT,
	HTTP_PARTIAL_CONTENT,

	// 3xx: Redirection
	HTTP_MULTIPLE_CHOICES = 300,
	HTTP_MOVED_PERMANENTLY,
	HTTP_FOUND,
	HTTP_SEE_OTHER,
	HTTP_NOT_MODIFIED,
	HTTP_SWITCHED_PROXY,
	HTTP_TEMPORARY_REDIRECT,
	HTTP_RESUME_INCOMPLETE,

	// 4xx: Client Error
	HTTP_BAD_REQUEST = 400,
	HTTP_UNAUTHORIZED,
	HTTP_PAYMENT_REQUIRED,
	HTTP_FORBIDDEN,
	HTTP_NOT_FOUND,
	HTTP_METHOD_NOT_ALLOWED,
	HTTP_NOT_ACCEPTABLE,
	HTTP_PROXY_AUTHENTIFICATION_REQUIRED,
	HTTP_REQUEST_TIMEDOUT,
	HTTP_CONFLICT,
	HTTP_GONE,
	HTTP_LENGTH_REQUIRED,
	HTTP_PRECONDITION_FAILED,
	HTTP_REQUEST_ENTITY_TOO_LARGE,
	HTTP_REQUEST_URI_TOO_LONG,
	HTTP_UNSUPPORTED_MEDIA_TYPE,
	HTTP_REQUESTED_RANGE_NOT_SATISFIABLE,
	HTTP_EXPECTATION_FAILED,

	// 5xx: Server Error
	HTTP_INTERNAL_SERVER_ERROR = 500,
	HTTP_NOT_IMPLEMENTED,
	HTTP_BAD_GATEWAY,
	HTTP_SERVICE_UNAVAILABLE,
	HTTP_GATEWAY_TIMEOUT,
	HTTP_VERSION_NOT_SUPPORTED,
	HTTP_NETWORK_AUTHENTICATION_REQUIRED = 511
} HTTP_CODES ;

