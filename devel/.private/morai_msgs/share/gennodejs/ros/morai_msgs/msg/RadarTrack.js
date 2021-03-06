// Auto-generated. Do not edit!

// (in-package morai_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class RadarTrack {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.uuid = null;
      this.position = null;
      this.velocity = null;
      this.acceleration = null;
      this.size = null;
      this.classification = null;
      this.position_covariance = null;
      this.velocity_covariance = null;
      this.acceleration_covariance = null;
      this.size_covariance = null;
      this.amplitude = null;
    }
    else {
      if (initObj.hasOwnProperty('uuid')) {
        this.uuid = initObj.uuid
      }
      else {
        this.uuid = 0;
      }
      if (initObj.hasOwnProperty('position')) {
        this.position = initObj.position
      }
      else {
        this.position = new geometry_msgs.msg.Point();
      }
      if (initObj.hasOwnProperty('velocity')) {
        this.velocity = initObj.velocity
      }
      else {
        this.velocity = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('acceleration')) {
        this.acceleration = initObj.acceleration
      }
      else {
        this.acceleration = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('size')) {
        this.size = initObj.size
      }
      else {
        this.size = new geometry_msgs.msg.Vector3();
      }
      if (initObj.hasOwnProperty('classification')) {
        this.classification = initObj.classification
      }
      else {
        this.classification = 0;
      }
      if (initObj.hasOwnProperty('position_covariance')) {
        this.position_covariance = initObj.position_covariance
      }
      else {
        this.position_covariance = [];
      }
      if (initObj.hasOwnProperty('velocity_covariance')) {
        this.velocity_covariance = initObj.velocity_covariance
      }
      else {
        this.velocity_covariance = [];
      }
      if (initObj.hasOwnProperty('acceleration_covariance')) {
        this.acceleration_covariance = initObj.acceleration_covariance
      }
      else {
        this.acceleration_covariance = [];
      }
      if (initObj.hasOwnProperty('size_covariance')) {
        this.size_covariance = initObj.size_covariance
      }
      else {
        this.size_covariance = [];
      }
      if (initObj.hasOwnProperty('amplitude')) {
        this.amplitude = initObj.amplitude
      }
      else {
        this.amplitude = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type RadarTrack
    // Serialize message field [uuid]
    bufferOffset = _serializer.int8(obj.uuid, buffer, bufferOffset);
    // Serialize message field [position]
    bufferOffset = geometry_msgs.msg.Point.serialize(obj.position, buffer, bufferOffset);
    // Serialize message field [velocity]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.velocity, buffer, bufferOffset);
    // Serialize message field [acceleration]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.acceleration, buffer, bufferOffset);
    // Serialize message field [size]
    bufferOffset = geometry_msgs.msg.Vector3.serialize(obj.size, buffer, bufferOffset);
    // Serialize message field [classification]
    bufferOffset = _serializer.uint16(obj.classification, buffer, bufferOffset);
    // Serialize message field [position_covariance]
    bufferOffset = _arraySerializer.float32(obj.position_covariance, buffer, bufferOffset, null);
    // Serialize message field [velocity_covariance]
    bufferOffset = _arraySerializer.float32(obj.velocity_covariance, buffer, bufferOffset, null);
    // Serialize message field [acceleration_covariance]
    bufferOffset = _arraySerializer.float32(obj.acceleration_covariance, buffer, bufferOffset, null);
    // Serialize message field [size_covariance]
    bufferOffset = _arraySerializer.float32(obj.size_covariance, buffer, bufferOffset, null);
    // Serialize message field [amplitude]
    bufferOffset = _serializer.float32(obj.amplitude, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type RadarTrack
    let len;
    let data = new RadarTrack(null);
    // Deserialize message field [uuid]
    data.uuid = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [position]
    data.position = geometry_msgs.msg.Point.deserialize(buffer, bufferOffset);
    // Deserialize message field [velocity]
    data.velocity = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [acceleration]
    data.acceleration = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [size]
    data.size = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset);
    // Deserialize message field [classification]
    data.classification = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [position_covariance]
    data.position_covariance = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [velocity_covariance]
    data.velocity_covariance = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [acceleration_covariance]
    data.acceleration_covariance = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [size_covariance]
    data.size_covariance = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [amplitude]
    data.amplitude = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.position_covariance.length;
    length += 4 * object.velocity_covariance.length;
    length += 4 * object.acceleration_covariance.length;
    length += 4 * object.size_covariance.length;
    return length + 119;
  }

  static datatype() {
    // Returns string type for a message object
    return 'morai_msgs/RadarTrack';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'da20584d0f09f9e2d2e7565bee064422';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # This message relates only to FMCW radar.  
    # All variables below are relative to the radar's frame of reference.
    # This message is not meant to be used alone but as part of a stamped or array message.
    
    # Object classifications (Additional vendor-specific classifications are permitted starting from 32000 eg. Car)
    
    int8 uuid
    
                                                # Note: The z component of these fields is ignored for 2D tracking.
    geometry_msgs/Point position                # x, y, z coordinates of the centroid of the object being tracked.
    geometry_msgs/Vector3 velocity              # The velocity of the object in each spatial dimension.
    geometry_msgs/Vector3 acceleration          # The acceleration of the object in each spatial dimension.
    geometry_msgs/Vector3 size                  # The object size as represented by the radar sensor eg. length, width, height OR the diameter of an ellipsoid in the x, y, z, dimensions
                                                # and is from the sensor frame's view.
    uint16 classification                       # An optional classification of the object (see above)
    
    float32[] position_covariance              # Upper-triangle covariance about the x, y, z axes
    float32[] velocity_covariance              # Upper-triangle covariance about the x, y, z axes
    float32[] acceleration_covariance          # Upper-triangle covariance about the x, y, z axes
    float32[] size_covariance                  # Upper-triangle covariance about the x, y, z axes
    
    float32 amplitude
    
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new RadarTrack(null);
    if (msg.uuid !== undefined) {
      resolved.uuid = msg.uuid;
    }
    else {
      resolved.uuid = 0
    }

    if (msg.position !== undefined) {
      resolved.position = geometry_msgs.msg.Point.Resolve(msg.position)
    }
    else {
      resolved.position = new geometry_msgs.msg.Point()
    }

    if (msg.velocity !== undefined) {
      resolved.velocity = geometry_msgs.msg.Vector3.Resolve(msg.velocity)
    }
    else {
      resolved.velocity = new geometry_msgs.msg.Vector3()
    }

    if (msg.acceleration !== undefined) {
      resolved.acceleration = geometry_msgs.msg.Vector3.Resolve(msg.acceleration)
    }
    else {
      resolved.acceleration = new geometry_msgs.msg.Vector3()
    }

    if (msg.size !== undefined) {
      resolved.size = geometry_msgs.msg.Vector3.Resolve(msg.size)
    }
    else {
      resolved.size = new geometry_msgs.msg.Vector3()
    }

    if (msg.classification !== undefined) {
      resolved.classification = msg.classification;
    }
    else {
      resolved.classification = 0
    }

    if (msg.position_covariance !== undefined) {
      resolved.position_covariance = msg.position_covariance;
    }
    else {
      resolved.position_covariance = []
    }

    if (msg.velocity_covariance !== undefined) {
      resolved.velocity_covariance = msg.velocity_covariance;
    }
    else {
      resolved.velocity_covariance = []
    }

    if (msg.acceleration_covariance !== undefined) {
      resolved.acceleration_covariance = msg.acceleration_covariance;
    }
    else {
      resolved.acceleration_covariance = []
    }

    if (msg.size_covariance !== undefined) {
      resolved.size_covariance = msg.size_covariance;
    }
    else {
      resolved.size_covariance = []
    }

    if (msg.amplitude !== undefined) {
      resolved.amplitude = msg.amplitude;
    }
    else {
      resolved.amplitude = 0.0
    }

    return resolved;
    }
};

module.exports = RadarTrack;
