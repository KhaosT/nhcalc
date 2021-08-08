//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#import <Vision/Vision.h>

@interface VNCreateNeuralHashprintRequest : VNRequest

@end

@interface VNEspressoModelImageprint : NSObject

@property(readonly, nonatomic) unsigned long long version;
@property(readonly, nonatomic) unsigned long long serializedLength;
@property(readonly, nonatomic) unsigned long long requestRevision;
- (nullable NSData *)serializeStateAndReturnError:(NSError **)arg1;
- (nullable NSData *)encodeHashDescriptorWithBase64EncodingAndReturnError:(NSError **)arg1;
- (id)labelsAndConfidence;
- (id)originatingRequestSpecifier;
- (NSObject *)descriptorData;
+ (unsigned long long)currentVersion;
+ (BOOL)supportsSecureCoding;

@end

@interface VN6kBnCOr2mZlSV6yV1dLwB: VNRequest

@property(strong, nonatomic) VNEspressoModelImageprint* inputSignatureprint;
@property(readwrite, nonatomic) NSUInteger imageSignatureprintType;
@property(readwrite, nonatomic) NSUInteger imageSignatureHashType;

@end

@interface VN3XKGTKNBvy6h4RFtpxLyW : VNObservation

- (VNEspressoModelImageprint *)imageSignatureprint;
- (VNEspressoModelImageprint *)imageSignatureHash;

@end

@interface VNImageNeuralHashprintObservation: VNObservation

- (nullable VNEspressoModelImageprint*) imageNeuralHashprint;

@end
