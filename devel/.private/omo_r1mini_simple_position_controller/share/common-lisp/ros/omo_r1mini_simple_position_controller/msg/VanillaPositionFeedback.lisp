; Auto-generated. Do not edit!


(cl:in-package omo_r1mini_simple_position_controller-msg)


;//! \htmlinclude VanillaPositionFeedback.msg.html

(cl:defclass <VanillaPositionFeedback> (roslisp-msg-protocol:ros-message)
  ((error_s
    :reader error_s
    :initarg :error_s
    :type cl:float
    :initform 0.0)
   (error_theta
    :reader error_theta
    :initarg :error_theta
    :type cl:float
    :initform 0.0))
)

(cl:defclass VanillaPositionFeedback (<VanillaPositionFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <VanillaPositionFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'VanillaPositionFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name omo_r1mini_simple_position_controller-msg:<VanillaPositionFeedback> is deprecated: use omo_r1mini_simple_position_controller-msg:VanillaPositionFeedback instead.")))

(cl:ensure-generic-function 'error_s-val :lambda-list '(m))
(cl:defmethod error_s-val ((m <VanillaPositionFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader omo_r1mini_simple_position_controller-msg:error_s-val is deprecated.  Use omo_r1mini_simple_position_controller-msg:error_s instead.")
  (error_s m))

(cl:ensure-generic-function 'error_theta-val :lambda-list '(m))
(cl:defmethod error_theta-val ((m <VanillaPositionFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader omo_r1mini_simple_position_controller-msg:error_theta-val is deprecated.  Use omo_r1mini_simple_position_controller-msg:error_theta instead.")
  (error_theta m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <VanillaPositionFeedback>) ostream)
  "Serializes a message object of type '<VanillaPositionFeedback>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'error_s))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'error_theta))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <VanillaPositionFeedback>) istream)
  "Deserializes a message object of type '<VanillaPositionFeedback>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'error_s) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'error_theta) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<VanillaPositionFeedback>)))
  "Returns string type for a message object of type '<VanillaPositionFeedback>"
  "omo_r1mini_simple_position_controller/VanillaPositionFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VanillaPositionFeedback)))
  "Returns string type for a message object of type 'VanillaPositionFeedback"
  "omo_r1mini_simple_position_controller/VanillaPositionFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<VanillaPositionFeedback>)))
  "Returns md5sum for a message object of type '<VanillaPositionFeedback>"
  "bebf2815c907dad92c117d5e622ce530")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'VanillaPositionFeedback)))
  "Returns md5sum for a message object of type 'VanillaPositionFeedback"
  "bebf2815c907dad92c117d5e622ce530")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<VanillaPositionFeedback>)))
  "Returns full string definition for message of type '<VanillaPositionFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%float32 error_s~%float32 error_theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'VanillaPositionFeedback)))
  "Returns full string definition for message of type 'VanillaPositionFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%float32 error_s~%float32 error_theta~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <VanillaPositionFeedback>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <VanillaPositionFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'VanillaPositionFeedback
    (cl:cons ':error_s (error_s msg))
    (cl:cons ':error_theta (error_theta msg))
))