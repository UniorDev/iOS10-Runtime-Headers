/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBacklightLuxMicroAmpsBucket : PBCodable <NSCopying> {
    unsigned int _bucketDuration;
    struct { 
        unsigned int bucketDuration : 1; 
    } _has;
}

@property bool hasBucketDuration;
@property unsigned int bucketDuration;


- (unsigned int)bucketDuration;
- (bool)hasBucketDuration;
- (void)setHasBucketDuration:(bool)arg1;
- (void)setBucketDuration:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end