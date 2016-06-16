//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface CSLUIPBNumber : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _int64Value;
    float _floatValue;
    int _int32Value;
    _Bool _boolValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int int64Value:1;
        unsigned int floatValue:1;
        unsigned int int32Value:1;
        unsigned int boolValue:1;
    } _has;
}

@property(nonatomic) long long int64Value; // @synthesize int64Value=_int64Value;
@property(nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) float floatValue; // @synthesize floatValue=_floatValue;
@property(nonatomic) int int32Value; // @synthesize int32Value=_int32Value;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasInt64Value;
@property(nonatomic) _Bool hasBoolValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasFloatValue;
@property(nonatomic) _Bool hasInt32Value;

@end
